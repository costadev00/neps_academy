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
    int moedas[] = {100, 50, 25, 10, 5, 1};
    int ans[6];
    int tot = 0;
    for (int i = 0; i < 6; i++)
    {
        ans[i] = n / moedas[i];
        n -= ans[i] * moedas[i];
        tot += ans[i];
    }
    cout << tot << endl;
    for (int i = 0; i < 6; i++)
    {
        cout << ans[i] << endl;
    }

    return 0;
}