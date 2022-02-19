#include <bits/stdc++.h>

using namespace std;

#define MAXN 10000
#define INF 100000001
int n;
int m;
int dist[MAXN];
vector<tuple<int, int, int>> edges;

// Executa-se uma série de passos. Um passo consiste em relaxar todas as arestas do nosso grafo.
//  Após o primeiro passo, vamos descobrir as distâncias de s a todos os vértices usando no máximo 1 aresta.
//  Após o segundo passo, descobriremos todas as distâncias de s a todos os vértices usando no máximo 2 arestas.
//   Em geral, após o i-ésimo passo, encontraremos o menor caminho entre s e todos os vértices, utilizando no máximo i arestas.
void bellman_ford(int x)
{
    for (int i = 1; i <= n; i++)
        dist[i] = INF;

    dist[x] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto e : edges)
        {
            int a, b, w;
            tie(a, b, w) = e;
            dist[b] = min(dist[b], dist[a] + w);
        }
    }
}

int main()
{
    int s;
    cin >> n >> m;

    for (int i = 0; i < m; i++)
    {
        int u, v, w;

        // Lê a descrição de uma aresta
        cin >> u >> v >> w;

        edges.push_back({u, v, w});
        edges.push_back({v, u, w});
    }
    cin >> s;
    bellman_ford(s);
    int menor = INT_MAX;
    int maior = INT_MIN;
    for (int i = 1; i <= n; i++)
    {
        if (dist[i] < menor && dist[i] != 0)
            menor = dist[i];
        if (dist[i] > maior && dist[i] != 0)
            maior = dist[i];
    }
    cout << maior - menor << endl;
    edges.clear();
    // for (int i = 1; i <= n; i++)
    //     cout << "A distancia entre " << s << " e " << i << " = " << dist[i] << endl;
}