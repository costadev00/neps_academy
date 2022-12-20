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
    int j, r;
    cin >> j >> r;
    map<int, int> m;
    while (r--)
    {
        for (int i = 1; i <= j; i++)
        {
            int x;
            cin >> x;
            m[i] += x;
        }
    }
    int max = INT_MIN;
    int person;
    for (auto u : m)
    {
        // cout << u.first << " " << u.second << endl;
        if (u.second >= max)
        {
            max = u.second;
            person = u.first;
        }
    }
    cout << person << endl;
    return 0;
}