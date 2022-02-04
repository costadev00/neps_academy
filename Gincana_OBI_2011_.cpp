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
#define MAXN 1001
int n, m;
vector<int> adj[MAXN];
bool used[MAXN];
vector<int> comp;

void dfs(int v)
{
    used[v] = true;
    comp.push_back(v);
    for (size_t i = 0; i < (int)adj[v].size(); ++i)
    {
        int to = adj[v][i];
        if (!used[to])
            dfs(to);
    }
}

void find_comps()
{
    int cont = 0;
    for (int i = 1; i <= n; ++i)
        used[i] = false;
    for (int i = 1; i <= n; ++i)
        if (!used[i])
        {
            comp.clear();
            dfs(i);
            ++cont;
        }
    cout << cont << endl;
}
int main()
{
    fastio;
    cin >> n >> m;
    int x, y;
    while (m--)
    {
        cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    find_comps();
    return 0;
}