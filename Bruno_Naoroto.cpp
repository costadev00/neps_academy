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
    int soma = 0;
    for (int i = 0; i < 5; i++)
    {
        cin >> n;
        soma += n;
    }
    if (soma >= 40)
        cout << "Carga de horas completa\n";
    else
        cout << "Carga de horas incompleta\n";
    return 0;
}