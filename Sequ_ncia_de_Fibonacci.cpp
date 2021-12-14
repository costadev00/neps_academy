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
    vector<int> vet;
    vet.pb(0);
    vet.pb(1);

    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    for (int i = 2; i < n; i++)
    {
        vet.pb(vet[i - 1] + vet[i - 2]);
    }
    for (auto i : vet)
        cout << i << " ";
    return 0;
}