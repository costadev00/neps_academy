#include <iostream>
#include <vector>

using namespace std;

vector<vector<int>> adj; // lista de adjacências
vector<bool> visited;    // vetor de visitados

void dfs(int v)
{
    visited[v] = true;
    cout << v << " ";

    for (int u : adj[v])
    {
        if (!visited[u])
        {
            dfs(u);
        }
    }
}

int main()
{
    int n, m;
    cin >> n >> m; // lê o número de vértices e arestas

    adj.resize(n + 1);
    visited.resize(n + 1, false);

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v; // lê a aresta
        adj[u].push_back(v);
        adj[v].push_back(u); // para grafo não direcionado
    }

    dfs(1); // inicia a DFS a partir do vértice 1

    return 0;
}