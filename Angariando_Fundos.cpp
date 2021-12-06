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

struct Convidado
{
    int b, f, d;
};

int main()
{
    fastio;
    int n, b, f, d;
    cin >> n;
    bool convida = false;
    Convidado c[n];
    FOR(i, 0, n)
    {
        cin >> b >> f >> d;
        c[i].b = b;
        c[i].f = f;
        c[i].d = d;
    }
    int maxprofit=INT_MIN;
    FOR(i, 0, n)
    {
        
    }
    return 0;
}