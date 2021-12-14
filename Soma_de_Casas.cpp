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
        int x, k;
        vi vet;

        while (n--)
        {
            cin >> x;
            vet.pb(x);
        }
        cin >> k;
        int tam = vet.size();
        int a, b;
        for (int i = 0; i < tam; i++)
        {
            int res = abs(k - vet[i]);
            auto it = lower_bound(vet.begin(), vet.end(), res);
            if (*it == res)
            {
                a = vet[i];
                b = res;
            }
        }
        // debug(k);
        // for(auto i:vet)
        // cout<<i<<" ";
        cout << b << " " << a << endl;
    }
    return 0;
}