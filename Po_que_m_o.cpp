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
    int n, x, y, z;
    cin >> n;
    vi vet;
    for (int i = 0; i < 3; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    int cont = 0;
    for (int i = 0; i < 3; i++)
    {
        if (n - vet[i] >= 0)
        {
            n -= vet[i];
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}