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

int n, m, x, y, k;
int cnt = 0;
int grid[201][201];

void bfs(int i, int j)
{
    queue<pair<int, int>> q;
    q.push({i, j});
    while (!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();
        if (grid[x][y] == 1)
            continue;
        grid[x][y] = 1;
        cnt++;
        for (int dx = -1; dx <= 1; dx++)
        {
            for (int dy = -1; dy <= 1; dy++)
            {
                int nx = x + dx;
                int ny = y + dy;
                if (nx < 1 || nx > n || ny < 1 || ny > m)
                    continue; // Bounds check
                if (grid[nx][ny] == 0)
                {
                    q.push({nx, ny});
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> x >> y >> k;
    for (int i = 1; i <= k; i++)
    {
        int a, b;
        cin >> a >> b;
        grid[a][b] = 1;
    }
    bfs(x, y);
    cout << cnt << endl;
    return 0;
}
