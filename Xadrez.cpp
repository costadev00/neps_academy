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
    int aux1 = 1, aux2 = 1;
    int l, c;
    cin >> l >> c;
    int mat[l][c];
    for (int i = 0; i < l; i++)
    {
        aux2 = aux1;
        if (aux1 == 0)
            aux1 = 1;
        else
            aux1 = 0;

        for (int j = 0; j < c; j++)
        {
            mat[i][j] = aux2;
            if (aux2 == 0)
                aux2 = 1;
            else
                aux2 = 0;
        }
    }

    cout << mat[l - 1][c - 1] << endl;
    return 0;
}