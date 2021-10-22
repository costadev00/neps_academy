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

// Dados x, y e m, ela retorna (x*y)%mod
long long int fastMultiplication(long long int x, long long int y, long long m)
{
    if (x == 0) // Caso base
        return 0;

    long long int answer = fastMultiplication(x / 2, y, m); // Acha a resposta do nosso subproblema
    answer = (2 * answer) % m;                              // Multiplica a nossa resposta por 2 e tira módulo m

    if (x % 2 == 0) // Checa se x é par
        return answer;

    return (answer + y) % m;
}
int main()
{
    fastio;
    long long int x, y, m;
    cin >> x >> y >> m;
    cout << fastMultiplication(x, y, m);
    return 0;
}