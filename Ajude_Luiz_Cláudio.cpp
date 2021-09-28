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
    vi vet1;
    int n, x;
    cin >> n;
    FOR(i, 0, n)
    {
        cin >> x;
        vet1.pb(x);
    }
    vi vet2(vet1);
    sort(vet2.begin(), vet2.end());
    if (vet1 == vet2)
        cout << "Notas validas\n";
    else
        cout << "Notas invalidas\n";
    return 0;
}