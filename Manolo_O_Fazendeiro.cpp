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
    // declare n that is the size of the matrix
    int n;
    cin >> n;
    // declare the matrix
    int mat[n][n];
    // read the matrix
    FOR(i, 0, n)
    {
        FOR(j, 0, n)
        {
            cin >> mat[i][j];
        }
    }
    // declare and read q that is the number of queries
    int q;
    cin >> q;
    // declare and read l1, c1, l2, c2 that are the coordinates of the rectangle
    int l1, c1, l2, c2;
    // read
    int sum = 0;
    while (q--)
    {
        cin >> l1 >> c1 >> l2 >> c2;
        // return the sum of the cells of the rectangle
        for (int i = l1 - 1; i < l2; i++)
            for (int j = c1 - 1; j < c2; j++){
                sum += mat[i][j];
                mat[i][j] = 0;
            }
    }
    cout << sum;
    return 0;
}