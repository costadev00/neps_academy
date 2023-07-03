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
    int n, m;
    cin >> n >> m;
    int i, r;
    // define a map called infectados with max size of n+1
    map<int, int> infectados;

    cin >> i >> r;
    infectados[i] = 1;
    for (int i = 1; i <= m; i++)
    {
        if (i == r)
        {
            int a;
            cin >> a;
            while (a--)
            {
                int x;
                cin >> x;
                infectados[x] = 1;
            }
        }
        else if (i > r)
        {
            int a;
            cin >> a;
            bool f = false;
            vector<int> vet;
            while (a--)
            {
                int x;
                cin >> x;
                vet.pb(x);
                if (infectados[x] == 1)
                    f = true;
            }
            if (f)
            {
                for (int a = 0; a < vet.size(); a++)
                    infectados[vet[a]] = 1;
            }
        }
        else
        {
            int a;
            cin >> a;
            while (a--)
            {
                int x;
                cin >> x;
            }
        }
    }
    int ans = 0;
    for (auto u : infectados)
    {
        // cout << u.first << " " << u.second << endl;
        if (u.second == 1)
            ans++;
    }
    cout << ans << endl;
    return 0;
}