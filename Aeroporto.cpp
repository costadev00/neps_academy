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

int main()
{
    fastio;
    int a, v;
    int t = 1;
    while (cin >> a >> v)
    {
        if (a == 0 && v == 0)
            break;
        vector<int> adj[a + 1];
        int x, y;
        while (v--)
        {
            cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int maior = -1;
        vector<int> res;
        for (int i = 1; i < a + 1; i++)
        {
            // debug(maior);
            // debug(adj[i].size());
            int num = adj[i].size();
            if (num > maior)
            {
                maior = num;
                res.pb(i);
            }
        }
        // debug(maior);
        cout << "Teste " << t << endl;
        for (int i = 1; i < a + 1; i++)
        {
            if (adj[i].size() == maior)
                cout << i << " ";
        }
        cout<<endl;
        t++;
        cout << endl;
    }

    return 0;
}