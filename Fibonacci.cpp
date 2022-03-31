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
#define N 31

bool ready[N];
ll value[N];

ll fibo(ll n)
{
    if (ready[n]) // Primeiro passo
        return value[n];

    if (n == 1 || n == 2) // Segundo passo
        return 1;

    value[n] = fibo(n - 1) + fibo(n - 2); // Terceiro passo
    ready[n]=true;
    return value[n];
}
int main()
{
    fastio;
    ll n;
    value[0] = 1;
    value[1] = 1;
    ready[0] = true;
    ready[1] = true;
    cin >> n;
    cout << fibo(n+1);
    return 0;
}