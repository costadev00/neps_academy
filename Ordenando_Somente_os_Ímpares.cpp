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
    int n;
    cin >> n;
    int x;
    vector<int> vet, vetp;
    while (n--)
    {
        cin >> x;
        if (x % 2 != 0)
            vet.pb(x);
        else
            vetp.pb(x);
    }
    sort(vet.begin(), vet.end());
    for (auto u : vet)
        cout << u << " ";
    for (auto u : vetp)
        cout << u << " ";
    return 0;
}