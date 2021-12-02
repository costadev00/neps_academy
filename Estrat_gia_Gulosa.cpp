#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...)
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
    vi S{1, 5, 10, 25, 50, 100};
    int v;
    while (cin >> v)
    {
        int coins = 0;
        for (int i = 5; i >= 0; i--)
        {
            while (v >= S[i])
            {
                // if (v < S[i])
                // break;
                debug(S[i]);
                debug(coins);
                debug(v);
                coins++;
                v -= S[i];
            }
        }
        cout << coins << endl;
    }
    return 0;
}