TODO: FAZ COM FLOYD WARSHALL QUE É GG
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

#define MAXN 101
#define INF 10000001

int dist[MAXN];
bool processed[MAXN];
vector<pair<int, int>> adj[MAXN];
priority_queue<pair<int, int>> q;

void dijkstra(int n, int x)
{
    for (int i = 1; i <= n; i++)
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

// visited[] array to make nodes visited
// src is starting node for DFS traversal
// prev_len is sum of cable length till current node
// max_len is pointer which stores the maximum length
// of cable value after DFS traversal
void DFS(int src, int prev_len, int *max_len, vector<bool> &visited)
{
    // Mark the src node visited
    visited[src] = 1;

    // curr_len is for length of cable from src
    // city to its adjacent city
    int curr_len = 0;

    // Adjacent is pair type which stores
    // destination city and cable length
    pair<int, int> adjacent;

    // Traverse all adjacent
    for (int i = 0; i < adj[src].size(); i++)
    {
        // Adjacent element
        adjacent = adj[src][i];

        // If node or city is not visited
        if (!visited[adjacent.first])
        {
            // Total length of cable from src city
            // to its adjacent
            curr_len = prev_len + adjacent.second;

            // Call DFS for adjacent city
            DFS( adjacent.first, curr_len, max_len, visited);
        }

        // If total cable length till now greater than
        // previous length then update it
        if ((*max_len) < curr_len)
            *max_len = curr_len;

        // make curr_len = 0 for next adjacent
        curr_len = 0;
    }
}

// n is number of cities or nodes in graph
// cable_lines is total cable_lines among the cities
// or edges in graph
int longestPath(int n)
{
    // maximum length of cable among the connected
    // cities
    int max_len = INT_MIN;

    // call DFS for each city to find maximum
    // length of cable
    for (int i = 1; i <= n; i++)
    {
        // initialize visited array with 0
        vector<bool> visited(n + 1, false);

        // Call DFS for src vertex i
        DFS(i, 0, &max_len, visited);
    }

    return max_len;
}

int main()
{
    fastio;
    int n, m;
    int u, v, w;
    while (cin >> n >> m)
    {
        for (int i = 0; i < m; i++)
        {
            cin >> u >> v >> w;
            adj[v].push_back({u, w});
            adj[u].push_back({v, w});
        }

        // dijkstra(n, 0);
        cout << longestPath(n);
    }
    return 0;
}