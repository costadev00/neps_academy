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
    if (n <= 1979)
        cout << "Geracao X!!!\n";
    else if (n >= 1980 && n < 1995)
        cout << "Geracao Millennials. Muito cringe!!!\n";
    else if (n >= 1996 && n < 2010)
        cout << "Geracao Z!!!\n";
    else
        cout << "Geracao Alpha!!!\n";
    return 0;
}