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
    while (cin >> n)
    {
        cin.ignore();
        string s1, s2;
        map<string, vector<string>> adj;
        for (int i = 0; i < n; i++)
        {
            cin >> s1 >> s2;
            adj[s1].pb(s2);
        }
    }
    return 0;
}