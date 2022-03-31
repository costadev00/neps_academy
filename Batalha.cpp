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
    int a1, d1, a2, d2;
    cin >> a1 >> d1 >> a2 >> d2;
    if (d1 == a2 && a1 != d2)
        cout << 1 << endl;
    else if (d2 == a1 && a2 != d1)
        cout << 2 << endl;
    else
        cout << -1 << endl;
    return 0;
}