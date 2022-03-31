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
    double n, m;
    cin >> n >> m;
    double d = 2.0;
    double acm = m;
    double ans = 0;
    for (int i = 0; i < n; i++)
    {
        double op = 1 / d;
        ans += acm / op;
        acm += ans;
        // debug(acm);
        ++d;
    }
    cout << ans;
    return 0;
}