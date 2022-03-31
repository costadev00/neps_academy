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
    int i, j, n, ari = 0, ane = 0;
    int x;
    cin >> i >> j >> n;
    while (n--)
    {
        for (int k = 0; k < i; k++)
        {
            for (int z = 0; z < j; z++)
            {
                cin >> x;
                if (x == 0)
                    ari++;
                else
                    ane++;
            }
        }
        if (ari > ane)
            cout << "Ari venceu\n";
        else if (ari < ane)
            cout << "Ane venceu\n";
        else
            cout << "Empate\n";
        ari = 0;
        ane = 0;
    }
    return 0;
}