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
    int mat[n + 1][n + 1] = {0};

    int x1, y1;
    cin >> x1 >> y1;
    mat[x1][y1] = 1;
    int x2, y2;
    cin >> x2 >> y2;
    mat[x2][y2] = 1;
    bool flag = true;
    int metade = n / 2;

    int count = 0;
    // percorre todas as celulas da metade vertical da matriz
    for (int i = 1; i <= metade; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (mat[i][j] == 1)
            {
                count++;
            }
        }
    }
    if (count == 1)
    {
        cout << "S" << endl;
        return 0;
    }
    else
    {
        count = 0;
        // percorre todas as celulas da metade horizontal da matriz
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= metade; j++)
            {
                if (mat[i][j] == 1)
                {
                    count++;
                }
            }
        }
        if(count == 1)
        {
            cout << "S" << endl;
            return 0;
        }
        else
        {
            cout << "N" << endl;
            return 0;
        }
    }
}