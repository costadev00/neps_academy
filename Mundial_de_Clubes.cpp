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
    cin >> n;
    cin.ignore();
    vector<string> pas, hot;
    string x;
    string p = "rola", h = "buceta";
    bool pasok = true;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        pas.pb(x);
    }
    sort(pas.begin(), pas.end());
    cin >> m;
    cin.ignore();
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        hot.pb(x);
    }
    sort(hot.begin(), hot.end());

    for (int i = 0; i < n; i++)
    {
        int tam = pas[i].size();
        bool stpassed = true;
        for (int j = 0; j < tam; i++)
        {
            if (pas[i][j] != '4' && pas[i][j] != '7')
            {
                stpassed = false;
                break;
            }
        }
        if (stpassed)
        {
            p = pas[i];
            break;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int tam = hot[i].size();
        bool stpassed = true;
        for (int j = 0; j < tam; i++)
        {
            if (hot[i][j] != '4' && hot[i][j] != '7')
            {
                stpassed = false;
                break;
            }
        }
        if (stpassed)
        {
            h = hot[i];
            break;
        }
    }
    cout << p << endl;
    cout << h << endl;
    return 0;
}