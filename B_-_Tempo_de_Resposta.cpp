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
    map<int, int> m;
    int vet[21];
    char c;
    int x;
    int tr = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> c >> x;
        vet[i] = x;
        if (c == 'R')
        {
            m[x] = 0;
            tr++;
        }
        else if (c == 'T')
            tr += x;

        else
            m[x] += tr;
    }
    for (auto u : m)
        cout << u.first << " " << u.second << endl;
    return 0;
}