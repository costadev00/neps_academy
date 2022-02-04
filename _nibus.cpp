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
#define N 10001
queue<int> q;
bool visited[N + 1];
vector<int> adj[N + 1];
void bfs(int x, int c, int f)
{
    visited[x] = true;
    int distance[c + 1];
    memset(distance, -1, sizeof(distance));
    distance[x] = 0;
    q.push(x);
    while (!q.empty())
    {
        int s = q.front();
        q.pop();
        // process node s
        for (auto u : adj[s])
        {
            if (visited[u])
                continue;
            visited[u] = true;
            distance[u] = distance[s] + 1;
            q.push(u);
        }
    }

    cout << distance[f] << endl;
}

int main()
{
    fastio;
    int n, p, f;
    int x, y;
    while (cin >> n >> p >> f)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        bfs(p, n, f);
    }

    return 0;
}