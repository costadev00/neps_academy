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
    int p, r;
    int t = 1;
    while (cin >> p >> r && p && r)
    {
        vector<int> v;
        cout << "Teste " << t++ << endl;
        for (int i = 0; i < p; i++)
        {
            int x;
            cin >> x;
            v.pb(x);
        }
        while (r--)
        {

            int n;
            cin >> n;
            int j;
            cin >> j;
            for (int i = 0; i < n; i++)
            {
                int x;
                cin >> x;
                if (x != j)
                {
                    v[i] = -1;
                }
            }
            for (int i = 0; i < v.size(); i++)
            {
                if (v[i] == -1)
                    v.erase(v.begin() + i);
            }
        }
        cout << v[0];
        cout << endl
             << endl;
    }
    return 0;
}