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
    int n, m;
    int t = 0;
    while (cin >> n >> m)
    {
        if (n == 0 && m == n)
            break;

        vector<int> vet;
        int soma = 0;
        int maior = INT_MIN, menor = INT_MAX;
        int x;

        for (int i = 0; i < n; i++)
        {
            cin >> x;
            vet.pb(x);
        }
        for (int i = 0; i < n; i++)
        {
            // debug(vet[i]);
            int aux = m;
            while (aux -)
            {
                soma+=
            }
            int media = soma / m;
            // debug(media);
            maior = max(maior, media);
            menor = min(menor, media);
        }
        cout << "Teste " << ++t << endl;
        cout << menor << " " << maior << endl;
        cout << endl;
    }
    return 0;
}