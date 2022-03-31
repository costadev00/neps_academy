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
    vi vet;
    map<int, int> mp;
    for (int i = 1; i <= n; i++)
    {
        int voltacm = 0;
        for (int j = 0; j < m; j++)
        {
            cin >> x;
            voltacm += x;
        }
        mp[voltacm] = i;
    }
    int lim = 0;
    for (auto u : mp)
    {
        if (lim == 3)
            break;
        cout << u.second << endl;
        lim++;
    }
    return 0;
}