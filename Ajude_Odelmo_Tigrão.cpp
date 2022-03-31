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
    int n, m, p;
    cin >> n >> m >> p;
    int popvac = (p * n) / 100;
    if (m >= popvac)
        cout << "UdiCity esta segura!!!\n";
    else
        cout << "UdiCity esta em perigo, vamos de LockDalson!!!\n";
    return 0;
}