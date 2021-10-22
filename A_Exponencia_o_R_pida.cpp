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

// Dados b, e e m, ela retorna (b^e)%mod
int fastExponentiation(int b, int e, int m)
{
    if (e == 0) // Caso base
        return 1 % m;

    long long int answer = fastExponentiation(b, e / 2, m); // Acha a resposta do nosso subproblema
    answer = (answer * answer) % m;                         // Eleva a resposta ao quadrado e tira módulo m

    if (e % 2 == 0) // Checa se e é par
        return answer;

    return (answer * b) % m;
}

int main()
{
    fastio;
    int b, e, m;
    cin >> b >> e >> m;
    cout << fastExponentiation(b, e, m);
    return 0;
}