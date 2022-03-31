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
    int x;
    int y;
    cin >> n >> x;
    int soma = n;
    int aux = soma;
    while (x--)
    {
        cin >> y;
        soma += y;
        if (soma > 100)
            soma = 100;
        if (soma < 0)
            soma = 0;
        // debug(soma);
    }
    cout << soma;
    return 0;
}