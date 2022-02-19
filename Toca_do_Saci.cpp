#include <bits/stdc++.h>
#define N 1010
using namespace std;
// GRAFO EM UMA MATRIZ

int n, m, mat[N][N], dist[N][N];
int dx[4] = {1, -1, 0, 0}, dy[4] = {0, 0, 1, -1};
int x_ini, y_ini;
int x_fim, y_fim;
void bfs()
{
    queue<pair<int, int>> fila;
    fila.push({x_ini, y_ini});
    dist[x_ini][y_ini] = 1;
    while (!fila.empty())
    {
        int x = fila.front().first, y = fila.front().second;
        fila.pop();
        for (int i = 0; i < 4; i++)
        {
            int a = x + dx[i], b = y + dy[i];
            if (a <= 0 || b <= 0 or a > n || b > m || dist[a][b] || mat[a][b] == 0)
                continue;
            dist[a][b] = dist[x][y] + 1;
            fila.push({a, b});
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin >> n >> m;

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 2)
            {
                x_ini = i;
                y_ini = j;
            }
            if (mat[i][j] == 3)
            {
                x_fim = i;
                y_fim = j;
            }
        }
    bfs();
    cout << dist[x_fim][y_fim] << "\n";
}
