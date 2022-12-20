#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll solve(ll l, ll r, ll k, ll did)
{
    if (l >= r || did == k)
        return did + r - l;
    ll m = (l + r) >> 1LL;
    if (r - m > m - l)
        return solve(m + 1, r, k, did + 1);
    return solve(l, m, k, did + 1);
}
int main()
{
    int n, k;
    cin >> n >> k;
    if (k == 1)
    {
        cout << n << '\n';
        return 0;
    }
    cout << solve(1, n, k, 0) << '\n';
    return 0;
}