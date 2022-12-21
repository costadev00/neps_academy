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
    int n, c, s;
    cin >> n >> c >> s;
    vector<int> vet;
    int x;
    int p = 1;
    int ans;
    // s = 1 ? ans = 1 : ans = 0;
    if (s == 1)
        ans = 1;
    else
        ans = 0;
    FOR(i, 0, c)
    {
        // debug(p);
        // debug(s);
        // debug(x);
        cin >> x;
        p += x;
        if (p >= n + 1)
            p = 1;
        if (p <= 0)
            p = n;
        if (p == s)
            ans++;
    }
    cout << ans;
    return 0;
}