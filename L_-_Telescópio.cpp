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
    ll a;
    ll n;
    ll ft = 40000000;
    cin >> a >> n;
    int ans = 0;
    while (n--)
    {
        ll x;
        cin >> x;
        if (a * x >= ft)
            ans++;
    }
    cout << ans;
    return 0;
}