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
    double l, a, p, r;
    cin >> l >> a >> p >> r;
    double caixa = sqrt(pow(l, 2) + pow(a, 2) + pow(p, 2));
    double area = 2 * r;

    if (caixa <= area)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}