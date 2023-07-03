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
    bool flag = true;
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        int sum = 0;
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
            sum += mat[i][j];
        }
        if (i == 0)
            num = sum;
        if (sum != num)
            flag = false;
    }
    // check diagonal
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += mat[i][i];
    }
    if (sum != num)
        flag = false;
    // check the second diagonal
    sum = 0;
    for (int i = 0; i < 3; i++)
    {
        sum += mat[2 - i][i];
    }
    if (sum != num)
        flag = false;
    // check columns
    for (int i = 0; i < 3; i++)
    {
        sum = 0;
        for (int j = 0; j < 3; j++)
            sum += mat[j][i];
        if (sum != num)
            flag = false;
    }

    if (!flag)
        cout << "NAO";
    else
        cout << "SIM";

    return 0;
}