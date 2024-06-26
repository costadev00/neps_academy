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

#define INF 10000001
#define MAXN 1010
int dist[MAXN];
bool processed[MAXN];
vector<pair<int, int>> adj[MAXN];
priority_queue<pair<int, int>> q;
int n, m;

void dijkstra(int x)
{
    for (int i = 0; i <= n + 1; i++)
        dist[i] = INF;

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
            int b = u.first, w = u.second;
            if (dist[a] + w < dist[b])
            {
                dist[b] = dist[a] + w;
                q.push({-dist[b], b});
            }
        }
    }
}

int main()
{
    fastio;
    int st = 0;
    while (cin >> n >> m)
    {
        int s, t, b;
        while (m--)
        {
            cin >> s >> t >> b;
            adj[s].pb({t, b});
            adj[t].pb({s, b});
        }
        dijkstra(st);
        cout << dist[n + 1];
    }

    return 0;
}