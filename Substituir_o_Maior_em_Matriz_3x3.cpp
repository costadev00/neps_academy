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
    int mat[3][3];
    int maior = INT_MIN;
    int l, c;
    FOR(i, 0, 3)
    {
        FOR(j, 0, 3)
        {
            cin >> mat[i][j];
            if (mat[i][j] > maior)
            {
                maior = mat[i][j];
            }
        }
    }
    FOR(i, 0, 3)
    {
        FOR(j, 0, 3)
        {
            if (mat[i][j] == maior)
            {
                mat[i][j] = -1;
            }
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}