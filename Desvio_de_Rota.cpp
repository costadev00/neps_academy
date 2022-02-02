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
#define MAXN 251
#define INF 10000001
int dist[MAXN];
bool processed[MAXN] = {false};
vector<pair<int, int>> adj[MAXN];
int n, m, c, st;

void dijkstra(int n, int x)
{
    for (int i = 0; i <= n; i++)
        dist[i] = INT_MAX;

    priority_queue<pair<int, int>> q;
    dist[x] = 0;
    q.push({0, x});
    while (!q.empty())
    {
        int a = q.top().second;
        q.pop();
        if (processed[a])
            continue;
        processed[a] = true;
        for (auto u : adj[a])
        {
            int b = u.first;
            int w = u.second;

            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
    cout << dist[c - 1] << endl;
}

int main()
{
    fastio;
    while (cin >> n >> m >> c >> st)
    {
        if (n == 0 && m == 0 && c == 0 && st == 0)
            break;

        int u, v, w;
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v >> w;
            if (u >= c && v >= c)
            {
                adj[u].push_back({v, w});
                adj[v].push_back({u, w});
            }
            if (u >= c && v < c)
                adj[u].push_back({v, w});
            if (u < c && v >= c)
                adj[v].push_back({u, w});
            if (u < c && v < c && abs(u - v) == 1)
            {
                adj[u].push_back({v, w});
                adj[v].push_back({u, w});
            }
        }
        int d = c - 1;

        dijkstra(n, st);
        // cout << dist[d] << endl;
        for (int i = 0; i < n; i++)
            adj[i].clear();
        memset(processed, false, MAXN);
    }
    return 0;
}