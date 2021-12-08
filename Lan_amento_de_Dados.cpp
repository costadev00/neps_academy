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
    int n, x;
    vi vet;

    cin >> n;
    FOR(i, 0, n)
    {
        cin >> x;
        vet.pb(x);
    }
    int cnt = INT_MIN;
    int maxx = INT_MIN;
    int res;
    FOR(i, 0, n)
    {
        cnt = count(vet.begin(), vet.end(), vet[i]);
        maxx = max(cnt, maxx);
        res = maxx;
    }
    cout << res;
    return 0;
}