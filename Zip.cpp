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
    int l1, l2, c1, c2;
    cin >> l1 >> l2 >> c1 >> c2;
    int l_final = 0, c_final = 0;
    if (c1 == c2)
        c_final = (c1 + c2) * 2;
    else if (c2 - 1 == c1 || c1 - 1 == c2)
        c_final = (c1 + c2) * 3;
    else
        c_final = c1 + c2;

    if (l1 == l2)
        l_final = (l1 + l2) * 2;
    else if (l2 - 1 == l1 || l1 - 1 == l2)
        l_final = (l1 + l2) * 3;
    else
        l_final = l1 + l2;

    if (c_final > l_final)
        cout << "Carolina\n";
    else if (c_final == l_final)
        cout << "empate\n";
    else
        cout << "Lia\n";

    return 0;
}