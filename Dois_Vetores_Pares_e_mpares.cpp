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
    int x;
    vi vetp, veti;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        if (x % 2 == 0)
            vetp.pb(x);
        else
            veti.pb(x);
    }
    for (auto i : vetp)
        cout << i << " ";
    cout << endl;
    for (auto i : veti)
        cout << i << " ";
    return 0;
}