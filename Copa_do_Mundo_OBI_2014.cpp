#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

const int MAXN = 100010;

// Struct para representar uma aresta entre dois vértices do grafo
struct Edge
{
    int u, v, w; // Aresta que liga os pontos u e v com peso w

    Edge(int u, int v, int w)
    {
        this->u = u;
        this->v = v;
        this->w = w;
    }

    bool operator<(Edge e) const { return this->w < e.w; } // Operador será usado pela função sort
};

int n, f, r;        // numero de cidades, ferrovias e rodovias
vector<Edge> edges; // grafo com a representacao de lista de arestas

// Implementação do DSU
int parent[MAXN], sz[MAXN];

void init_dsu(int n) // Initializa o DSU com n vértices
{
    for (int i = 0; i < n; i++)
    {
        sz[i] = 1;
        parent[i] = i;
    }
}
int find(int value)
{
    if (parent[value] == value)
        return value;
    return parent[value] = find(parent[value]);
}

void merge(int i, int j)
{
    i = find(i);
    j = find(j);

    if (i == j)
        return;

    if (sz[i] >= sz[j])
    {
        parent[j] = i;
        sz[i] += sz[j];
    }
    else
    {
        parent[i] = j;
        sz[j] += sz[i];
    }
}

// Implementacao do algoritmo de Kruskal por Joseph Kruskal para gerar a árvore geradora mínima

int kruskal()
{
    sort(edges.begin(), edges.end()); // Ordena as arestas por seu peso
    init_dsu(n);

    int mst_cost = 0;

    for (int i = 0; i < (int)edges.size(); i++) // Itera pela arestas
    {
        int u = edges[i].u;
        int v = edges[i].v;

        if (find(u) != find(v)) // Checa se u e v estão em componentes diferentes
        {
            merge(u, v);
            mst_cost += edges[i].w; // Aumenta o custo da nossa MST
        }
    }

    return mst_cost;
}

int main()
{
    // Lê o número de vértices e o número de arestas respectivamente
    cin >> n >> f >> r;

    for (int i = 0; i < f; i++)
    {
        int u, v, w;
        // Lê a descrição de uma aresta
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }
    // int fer = kruskal();
    // debug(fer);
    // edges.clear();
    // memset(parent, -1, MAXN);
    // memset(sz, -1, MAXN);
    for (int i = 0; i < r; i++)
    {
        int u, v, w;
        // Lê a descrição de uma aresta
        cin >> u >> v >> w;
        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }
    int rod = kruskal();
    debug(rod);
    // int mst_cost = kruskal();
    // cout << min(rod, fer) << endl;
}
