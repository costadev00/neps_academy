#include <iostream>
#include <vector>

using namespace std;

class Graph
{
public:
    int n; // Número de vértices
    vector<int> *adj;
    bool is_undirected;

    int *dist = NULL;     // dist[i] = distância entre i e a raiz atual
    bool *visited = NULL; // visited[i] = true, se e somente se nós já visitamos o i-ésimo vértice

    Graph(int n, bool is_undirected = true)
    {
        this->n = n;
        this->adj = new vector<int>[n];
        this->is_undirected = is_undirected;
    }

    void add_edge(int u, int v)
    {
        this->adj[u].push_back(v);
        if (this->is_undirected)
        {                              // Se o grafo não for direcionado
            this->adj[v].push_back(u); // Nós adicionamos as arestas de v para u
        }
    }

    int get_diameter()
    {
        int diameter = 0;

        for (int i = 0; i < this->n; i++)
        {
            int farthest = this->get_farthest(i);           // Armazena o vértice mais distance de i
            diameter = max(diameter, this->dist[farthest]); // Considera o caminho entre i e seu vértice mais distante
        }

        return diameter;
    }

    int get_farthest(int node)
    {
        delete this->dist, this->visited;
        this->dist = new int[this->n];
        this->visited = new bool[this->n];

        this->dist[node] = 0; // Inicializa a distância da raiz para ela mesma como 0
        this->dfs(node);

        int max_dist = -1;
        int farthest_node = 0;

        for (int i = 0; i < this->n; i++)
        {
            if (max_dist < this->dist[i])
            {
                farthest_node = i;
                max_dist = this->dist[i];
            }
        }

        return farthest_node;
    }

    void dfs(int current)
    {
        this->visited[current] = true;

        for (int i = 0; i < this->adj[current].size(); i++)
        {
            int neighbour = this->adj[current][i];

            if (!this->visited[neighbour])
            {
                this->dist[neighbour] = this->dist[current] + 1; // Atualiza a distância de neighbour baseado na distância de current
                this->dfs(neighbour);
            }
        }
    }
};

int main()
{
    int n;

    // Lê o número de vértices
    cin >> n;

    Graph graph(n);

    for (int i = 0; i < n - 1; i++)
    {
        int u, v;

        // Lê a descrição de uma aresta
        cin >> u >> v;

        graph.add_edge(u, v);
    }

    int diameter = graph.get_diameter();

    cout << diameter << endl;
}
