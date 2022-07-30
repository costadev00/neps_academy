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
    int n, x;
    int a;
    vector<int> coins;
    cin >> x >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        coins.push_back(a);
    }
    sort(coins.begin(), coins.end());
    for (int i = 0; i < n; i++)
    {
        debug(x);
        x %= coins[i];
    }
    if (x == 0)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}