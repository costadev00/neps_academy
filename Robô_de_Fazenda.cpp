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
    int n, k, d;
    int pos = 1;
    int res = 0;
    cin >> n >> k >> d;
    if (k == 1)
        res = 1;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        pos += x;
        if (pos == 0)
            pos = k;
        else if (pos == k + 1)
            pos = 1;
        if (pos == d)
            res++;
    }
    cout << res << endl;
    return 0;
}