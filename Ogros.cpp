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
    vector<pair<int, int>> inter;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> x;
    }
    inter.push_back(x + 1);
    sort(inter.begin(), inter.end());
    for (int i = 0; i < n; i++)
    {
        cin >> x;
    }
    for (int i = 0; i < m; i++)
    {
        cin >> x;
        // cout<<mp[x]<<" ";
    }
    for (auto u : inter)
        cout << u << " ";
    // print mp

    return 0;
}