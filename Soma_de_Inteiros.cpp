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
    int n, k;
    cin >> n >> k;
    int maxsum = INT_MIN;
    vi vet;
    FOR(i, 0, n)
    {
        cin >> x;
        vet.pb(x);
    }
    int res;
    FOR(i, 0, n)
    {
        maxsum = max(vet[i],maxsum);
        res+=maxsum;
        if (k == 0)
            break;
    }
    cout << res << endl;
    return 0;
}