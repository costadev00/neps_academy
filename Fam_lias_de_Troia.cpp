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
#define N 200010

int cont = 0;
vi vet;
vi adj[N + 1];
bool visited[N + 1];

void dfs(int current)
{
    visited[current] = true;

    for (auto i : adj[current])
        if (!visited[i])
            dfs(i);
}

int main()
{
    fastio;
    int n, m, x, y;
    cin >> n >> m;

    while (m--)
    {
        cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }

    for (int i = 1; i <= n; i++)
    {
        if (!visited[i])
        {
            cont++;
            dfs(i);
        }
    }
    cout << cont << endl;

    return 0;
}