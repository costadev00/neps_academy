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
    int soma = 0;
    int aux = 0;
    cin >> n;
    int mat[n][n];
    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            cin >> mat[i][j];
        }
    }
    bool flag = true;
    soma = 0;
    // verifica linha
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma += mat[i][j];
        }

        if (flag)
        {
            aux = soma;
            soma = 0;
            flag = false;
            continue;
        }
        if (soma != aux)
        {
            cout << -1 << endl;
            return 0;
        }
        // cout << soma << endl;
        soma = 0;
    }

    flag = true;
    soma = 0;
    // verifica coluna
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            soma += mat[j][i];
        }
        if (flag)
        {
            aux = soma;
            soma = 0;
            flag = false;
            continue;
        }
        if (soma != aux)
        {
            cout << -1 << endl;
            return 0;
        }
        // cout << soma << endl;
        soma = 0;
    }

    flag = true;
    soma = 0;
    // verifica diagonal 1
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)
                soma += mat[i][j];
        }
    }
    if (soma != aux)
    {
        cout << -1 << endl;
        return 0;
    }
    // cout << soma << endl;

    // verifica diagonal 2
    int j = n - 1;
    flag = true;
    soma = 0;

    for (int i = 0; i < n; i++)
    {
        soma += mat[i][j];
        j--;
    }
    if (soma != aux)
    {
        cout << -1 << endl;
        return 0;
    }
    else
        cout << soma << endl;
    return 0;
}