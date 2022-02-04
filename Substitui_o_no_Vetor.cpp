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
    int n = 10;
    int menor = INT_MAX;
    int x;
    vi vet;
    vi pos;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        if (x < menor)
        {
            menor = x;
        }
        vet.pb(x);
    }
    FOR(i, 0, n)
    {
        if (vet[i] == menor)
        {
            vet[i] = -1;
            pos.pb(i);
        }
    }
    cout << "Menor: " << menor << endl;
    cout << "Ocorrencias: ";
    for (auto x : pos)
        cout << x << " ";
    cout << endl;
    for (auto i : vet)
        cout << i << " ";
    return 0;
}