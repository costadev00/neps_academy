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
    //(R>50) e (L < R) e (R > D)
    fastio;
    int r, l, d;
    while (cin >> l >> r >> d)
    {
        if (r > 50 && l < r && r > d)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}