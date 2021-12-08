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

    int value = n;
    vector<int> primes; // Armazena a fatoração prima

    for (int i = 2; i * i <= n; i++) // Itera pelo intervalo [2,sqrt(n)]
    {
        while (value % i == 0) // Divide value por i enquanto value dividir i
        {
            primes.push_back(i);
            value /= i;
        }
    }

    if (value != 1) // Checa se existe um primo restante em value
        primes.push_back(value);

cout << primes.size() << endl;

for (int i = 0; i < (int)primes.size(); i++)
    cout << primes[i] << " ";
}