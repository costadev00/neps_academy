#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define MOD 1000000007
#define vi vector<int>
#define pb push_back
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

int main()
{
    fastio;
    float vI, vF;
    int t = 0;
    while (cin >> vI >> vF)
    {
        printf("Projeto %d:\n", ++t);
        printf("Percentual dos juros da aplicacao: ");
        printf("%.2f %%\n\n", ((vF / vI) * 100) - 100);
    }
    return 0;
}