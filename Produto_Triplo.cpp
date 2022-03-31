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
    int n;
    while (cin >> n)
    {
        vector<ll> vet;
        ll x;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vet.pb(x);
        }
        ll neg = vet[0] * vet[1] * vet[n - 1];
        ll res = vet[n - 3] * vet[n - 2] * vet[n - 1];
        cout << max(neg, res) << endl;
    }
    return 0;
}