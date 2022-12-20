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

const int MAXN = 1010;

int n, m;
int board[MAXN][MAXN];
bool visited[MAXN][MAXN];

bool is_cell_valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= m)
        return false;
    if (board[x][y] == 0)
        return false;
    if (visited[x][y])
        return false;

    return true;
}

void bfs(int x, int y)
{
    queue<pair<int, int>> q;

    visited[x][y] = true;
    q.push({x, y});

    while (!q.empty())
    {
        int currentX = q.front().first;
        int currentY = q.front().second;
        q.pop();

        if (is_cell_valid(currentX + 1, currentY)) // Checa se podemos ir para o sul
        {
            visited[currentX + 1][currentY] = true;
            q.push({currentX + 1, currentY});
        }

        if (is_cell_valid(currentX, currentY + 1)) // Checa se podemos ir para o leste
        {
            visited[currentX][currentY + 1] = true;
            q.push({currentX, currentY + 1});
        }

        if (is_cell_valid(currentX - 1, currentY)) // Checa se podemos ir para o norte
        {
            visited[currentX - 1][currentY] = true;
            q.push({currentX - 1, currentY});
        }

        if (is_cell_valid(currentX, currentY - 1)) // Checa se podemos ir para o oeste
        {
            visited[currentX][currentY - 1] = true;
            q.push({currentX, currentY - 1});
        }
    }
}

int main()
{
    cin >> n >> m;

    memset(board, 0, sizeof(board));
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> board[i][j];

    int qtd_components = 0;
    for (int x = 0; x < n; x++)
    {
        for (int y = 0; y < m; y++)
        {
            if (visited[x][y] || board[x][y] == 0)
                continue;

            bfs(x, y);
            qtd_components++;
        }
    }

    cout << qtd_components << endl;
}
