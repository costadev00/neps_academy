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
    int n, c, m, x;
    while (cin >> n >> c >> m)
    {

        vi vet;
        int cont = c;
        while (c--)
        {
            cin >> x;
            vet.pb(x);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> x;
            for (int j = 0; j < vet.size(); j++)
            {
                if (vet[j] == x)
                {
                    vet.erase(vet.begin() + j);
                    --cont;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}