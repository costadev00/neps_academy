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
#define N 100010

vector<vi> adj;
bool visited;
int peso[N];

int dfs(int current)
{

    if (adj[current].size() == 0)
        return peso[current] = 1;

    int cont = 1;
    for (auto u : adj[current])
        cont += dfs(u);
        
    return peso[current] = cont;
}

bool isbalanced(int v)
{
    if (adj[v].size() == 0)
        return true;

    int current_weight = peso[adj[v][0]];
    for (auto u : adj[v])
    {
        if (current_weight != peso[u] or !isbalanced(u))
        {
            return false;
        }
    }

    return true;
}

int main()
{
    fastio;
    int n;
    cin >> n;
    int x, y;
    adj.resize(n + 1);
    while (n--)
    {
        cin >> x >> y;
        adj[y].pb(x);
    }
    dfs(0);
    if (isbalanced(0))
        cout << "bem\n";
    else
        cout << "mal\n";
    return 0;
}