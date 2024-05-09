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
    int d, a, n;
    cin >> d >> a >> n;
    int valor_final;
    if (n == 1)
        valor_final = 31 * d;
    else
    {
        for (int i = 2; i <= n; i++)
        {
            if (i == 16)
                break;
            d += a;
        }
        // debug(d);
        int num_dias = 31 - n + 1;
        // debug(num_dias);
        valor_final += d * num_dias;
    }
    cout << valor_final;
    return 0;
}