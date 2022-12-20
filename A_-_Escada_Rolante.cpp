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
    int t = 0;
    int x;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    int ans = 10;
    for (int i = 0; i < n - 1; i++)
    {
        int dif = abs(vet[i] - vet[i + 1]);
        if (abs(vet[i] - vet[i + 1]) >= 10)
        {
            ans += 10;
            continue;
        }
        ans += dif;
        // continue;
    }
    cout << ans << endl;
    return 0;
}