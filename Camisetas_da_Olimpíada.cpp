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
    int pq = 0, gd = 0;
    int p, g;
    cin >> n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x == 1)
            pq++;
        else
            gd++;
    }
    cin >> p >> g;
    if (p == pq && gd == g)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}