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
    vi vet, vet2;
    int a, x;
    for (int i = 0; i < 10; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    cin >> a;
    int cont = 0;
    for (int i = 0; i < 10; i++)
    {
        if (vet[i] == a)
        {
            cont++;
            vet2.pb(i);
        }
    }
    if (cont == 0)
    {
        cout << "Mia x\n";
        return 0;
    }
    cout << cont << endl;
    for (auto i : vet2)
        cout << i << " ";
    cout << endl;
    return 0;
}