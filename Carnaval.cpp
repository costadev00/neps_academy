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
    double x, ans = 0;
    vector<double> vet;
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    
    for (int i = 0; i < 5; i++)
    {
        if (i != 0 && i != 4)
            ans += vet[i];
    }
    printf("%.1lf\n", ans);
    return 0;
}