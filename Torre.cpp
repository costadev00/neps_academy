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
#define max 1010
int m[max][max], l[max], c[max];
int main()
{
    fastio;
    int n, i = 0, j = 0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cin >> m[i][j];
            l[i] += m[i][j];
            c[j] += m[i][j];
        }
    }
    int res = INT_MIN;
    int maior = INT_MIN;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            int soma = l[i] + c[j] - 2 * m[i][j];
            if (maior < soma)
            {
                maior = soma;
                res = maior;
            }
        }
    }
    cout << res << endl;
    return 0;
}