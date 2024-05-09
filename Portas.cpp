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

ll vet[1000001];
int main()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    while (k--)
    {
        ll l, r, x;
        cin >> l >> r >> x;
        vet[l - 1] += x;
        vet[r] -= x;
        // for (int i = l - 1; i < r; i++)
        //     vet[i] += x;
    }

    ll ans, sum = 0, keep = 0;

    for (int r = 0; r < n; ++r)
    {
        keep += vet[r];
        sum += keep;
        if (sum > ans || r == 0)
            ans = sum;
        if (sum < 0)
            sum = 0;

        // ans = max(ans, sum);
        // sum = max(sum, 0);
    }
    cout << ans;
    return 0;
}