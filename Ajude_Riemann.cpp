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

const int MAXN = 12e6 + 5;
bool isPrime[MAXN];

int n;
int ans;
int sz = 0;

int main()
{
    fastio;
    cin >> n;
    for (int i = 0; i < MAXN; i++)
        isPrime[i] = true;

    for (int x = 2; x <= MAXN; x++) // Itera pelo intervalo [2,n]
    {
        if (!isPrime[x]) // Checa se x é primo
            continue;
        sz++;
        if (sz == n)
        {
            cout << x << endl;
            break;
        }
        for (int i = 2 * x; i <= MAXN; i += x) // Itera por todo múltiplo de x maior que ele e menor ou igual a n
            isPrime[i] = false;
    }
}