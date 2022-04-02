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
    double x;
    vector<double> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    double ans = vet[0] * 100;
    double dif = vet[n - 1] * 100;
    printf("%.2lf\n", dif - ans);
    return 0;
}