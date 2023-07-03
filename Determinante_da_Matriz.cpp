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

int det(int m[][3])
{
    int det = 0;

    for (int i = 0; i < 3; i++)
    {
        int aux = 1;
        for (int j = 0; j < 3; j++)
        {
            aux *= m[j][(i + j) % 3];
        }
        det += aux;
    }

    for (int i = 0; i < 3; i++)
    {
        int aux = 1;
        for (int j = 0; j < 3; j++)
        {
            aux *= m[2 - j][(i + j) % 3];
        }
        det -= aux;
    }

    return det;
}

int main()
{

    int m[3][3];

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            cin >> m[i][j];

    cout << det(m) << "\n";
}