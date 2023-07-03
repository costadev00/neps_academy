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
    int ans = 0;
    vector<int> vet;
    FOR(i, 0, n)
    {
        int a;
        cin >> a;
        vet.pb(a);
    }
    FOR(i, 1, n)
    {
        if(vet[i]%vet[i-1]==0)
            ans++;
    }
    cout << ans << endl;
    return 0;
}