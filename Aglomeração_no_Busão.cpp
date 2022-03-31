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

int n;
bool is_cell_valid(int x, int y)
{
    if (x < 0 || x >= n || y < 0 || y >= n)
        return false;

    return true;
}

int main()
{
    fastio;
    cin >> n;
    int mat[n][n];

    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> mat[i][j];
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            if (mat[i][j] == 1)
            {
                if (is_cell_valid(i - 1, j) && mat[i - 1][j] == 0)
                    mat[i - 1][j] = 2;
                if (is_cell_valid(i + 1, j) && mat[i + 1][j] == 0)
                    mat[i + 1][j] = 2;
                if (is_cell_valid(i, j + 1) && mat[i][j + 1] == 0)
                    mat[i][j + 1] = 2;
                if (is_cell_valid(i - 1, j - 1) && mat[i - 1][j - 1] == 0)
                    mat[i - 1][j - 1] = 2;
                if (is_cell_valid(i, j - 1) && mat[i][j - 1] == 0)
                    mat[i][j - 1] = 2;
                if (is_cell_valid(i - 1, j + 1) && mat[i - 1][j + 1] == 0)
                    mat[i - 1][j + 1] = 2;
                if (is_cell_valid(i + 1, j + 1) && mat[i + 1][j + 1] == 0)
                    mat[i + 1][j + 1] = 2;
                if (is_cell_valid(i + 1, j - 1) && mat[i + 1][j - 1] == 0)
                    mat[i + 1][j - 1] = 2;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }
    return 0;
}