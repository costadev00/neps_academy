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

vector<int> vet;

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}
int main()
{
    int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        vet.push_back(x);
    }
    int aux = vet[0];

    for (int i = 0; i < vet.size() - 1; i++)
    {
        aux = gcd(aux, vet[i + 1]);
    }
    cout << aux << endl;
}