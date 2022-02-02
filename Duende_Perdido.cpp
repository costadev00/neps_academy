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
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

#define N 11
const int INF = 0x3f3f3f3f;

bool visited[N][N];
int mat[N][N];
int dist[N][N];
int n, m;
int di[] = {1, -1, 0, 0}, dj[] = {0, 0, 1, -1};

bool isValid(int i, int j)
{
    if (i >= 0 && i < n && j >= 0 && j < m && !visited[i][j] && mat[i][j] != 2)
    {
        return true;
    }
    return false;
}

void bfs(int si, int sj)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            dist[i][j] = INF;
        }
    }
    dist[si][sj] = 0;

    queue<pair<int, int>> q;
    q.push({si, sj});

    while (!q.empty())
    {
        int ui = q.front().first, uj = q.front().second;
        q.pop();
        visited[ui][uj] = true;

        for (int k = 0; k < 4; k++)
        {
            int vi = ui + di[k], vj = uj + dj[k];
            if (isValid(vi, vj) && dist[vi][vj] > dist[ui][uj] + 1)
            {
                dist[vi][vj] = dist[ui][uj] + 1;
                q.push({vi, vj});
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    int inicio_i, inicio_j;
    vector<pair<int, int>> salas_saida;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] == 3)
            {
                inicio_i = i;
                inicio_j = j;
            }
            else if (mat[i][j] == 0)
            {
                salas_saida.push_back({i, j});
            }
        }
    }

    bfs(inicio_i, inicio_j);

    int resposta = INF;
    for (auto sala : salas_saida)
    {
        resposta = min(resposta, dist[sala.first][sala.second]);
    }

    cout << resposta << endl;
}