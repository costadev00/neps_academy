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
    int n, x;
    vector<int> vet, vet2, vetzero;
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            if (x == 0)
                vetzero.pb(i);
            vet.pb(x);
        }
        int tam = vet.size();
        for (int i = 0; i < tam; i++)
        {
            int dis = 9;
            if (vet[i] == -1)
            {
                for (int j = 0; j < vetzero.size(); j++)
                {
                    int op = abs(vetzero[j] - i);
                    // debug(op);
                    int aux = op;
                    dis = min(dis, op);
                }
                if (dis >= 9)
                    vet2.pb(9);
                else
                    vet2.pb(dis);
            }
            else
                vet2.pb(0);
        }
        for (auto i : vet2)
            cout << i << " ";
    }
    return 0;
}