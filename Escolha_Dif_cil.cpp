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
    int a, b, c, ma, mb, mc;
    cin >> a >> b >> c;
    cin >> ma >> mb >> mc;
    int tot = 0;
    if (a - ma < 0)
        tot += a - ma;
    if (b - mb < 0)
        tot += b - mb;
    if (c - mc < 0)
        tot += c - mc;
    cout << abs(tot) << endl;
    return 0;
}