#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int MAXN = 1005;

int n, m, dist[MAXN][MAXN];
char mat[MAXN][MAXN];
bool vis[MAXN][MAXN];

int bfs(int x, int y)
{
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = true;
    dist[x][y] = 0;

    while (!q.empty())
    {
        pair<int, int> p = q.front();
        q.pop();

        if (mat[p.first][p.second] == 'Q')
        {
            return dist[p.first][p.second];
        }

        int dx[] = {0, 1, 0, -1};
        int dy[] = {1, 0, -1, 0};
        for (int i = 0; i < 4; i++)
        {
            int nx = p.first + dx[i];
            int ny = p.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && mat[nx][ny] != '#' && !vis[nx][ny])
            {
                vis[nx][ny] = true;
                dist[nx][ny] = dist[p.first][p.second] + 1;
                q.push({nx, ny});
            }
        }
    }

    return -1;
}

int main()
{
    cin >> n >> m;

    memset(vis, false, sizeof(vis));
    memset(dist, -1, sizeof(dist));

    int rX, rY;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 'R')
            {
                rX = i;
                rY = j;
            }
        }
    }

    cout << bfs(rX, rY)+1 << endl;

    return 0;
}
