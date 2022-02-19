#include <bits/stdc++.h>

//FAZ COM DIJKSTRA ISSO AQUI DA TLE KKK

// Este é um algoritmo muito curto e eficiente quando
//  é necessário encontrar todas as distâncias mínimas entre todos os pares/vertices.

// EXEMPLO

// 5
// 6
// 1 5 1
// 1 2 5
// 1 4 9
// 2 3 2
// 3 4 7
// 4 5 2
using namespace std;

#define debug(args...) cout << (#args) << " = " << (args) << endl

#define MAXN 1001
int adj[MAXN][MAXN];

const int INF = 1000000010;
int main()
{
    int n, m;
    cin >> n >> m;
    int distance[n + 1][n + 1];
    int u, v, w;
    // Criando o grafo, utilizando a matriz de adjacencia como representacao
    for (int i = 0; i < m; i++)
    {
        cin >> u >> v >> w;
        adj[u][v] = w;
        adj[v][u] = w;
    }
    int st;
    cin >> st;
    // Inicializa
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == j)
                distance[i][j] = 0;
            else if (adj[i][j])
                distance[i][j] = adj[i][j];
            else
                distance[i][j] = INF;
        }
    }

    // FLOYD WARSHALL
    for (int k = 1; k <= n; k++)
    {
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                distance[i][j] = min(distance[i][j], distance[i][k] + distance[k][j]);
            }
        }
    }
    int maior = INT_MIN;
    int menor = INT_MAX;
    for (int j = 1; j <= n; j++)
    {
        if (distance[j][st] == INF || distance[j][st]==0)
            continue;
        else
        {
            // cout << "O caminho minimo de " << j << " para " << st << " eh " << distance[j][st] << endl;
            maior = max(maior, distance[j][st]);
            menor = min(menor, distance[j][st]);
            // debug(maior);
            // debug(menor);
        }
    }
    cout << maior - menor << endl;

    return 0;
}