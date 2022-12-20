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
    int n, a, b;
    cin >> n >> a >> b;
    int x;
    vector<int> veta, vetb;
    for (int i = 0; i < a; i++)
    {
        cin >> x;
        veta.pb(x);
    }
    for (int i = 0; i < b; i++)
    {
        cin >> x;
        vetb.pb(x);
    }

    int changes = 0;
    int pos = 1;
    int la = 0;
    int lb = 0;
    for (int i = 1; i <= n; i++)
    {
        if (find(veta.begin(), veta.end(), i) != veta.end(&&pos = 1))
        {
            pos = 1;
            break;
        }
        else if (find(vetb.begin(), vetb.end(), i) != vetb.end())
        {
            pos = 2;
            break;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        if (find(veta.begin(), veta.end(), i) != veta.end() && pos == 1)
            continue;
        else if (find(vetb.begin(), vetb.end(), i) != vetb.end() && pos == 2)
            continue;
        else
        {
            if (find(vetb.begin(), vetb.end(), i) != vetb.end() && pos == 1)
            {
                pos = 2;
                changes++;
            }
            else if (find(veta.begin(), veta.end(), i) != veta.end() && pos == 2)
            {
                pos = 1;
                changes++;
            }
        }
    }
    cout << changes << endl;
    return 0;
}