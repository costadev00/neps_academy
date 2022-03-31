
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
    int n, m;
    cin >> n >> m;
    int x;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    int res = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int dif = abs(vet[i] - m);

        if (vet[i] < m)
            vet[i + 1] += dif;
        else
            vet[i + 1] -= dif;
        res += dif;
    }
    cout << res << endl;
    return 0;
}