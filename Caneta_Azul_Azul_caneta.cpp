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

char a[100][100];
// a function "findPattern" given the number os rows and the number of columns and a pattern, the goal is to find a pattern in a char matrix "a", and return true if the pattern is found, and false otherwise
bool findPattern(int n, int m, char pattern[])
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == pattern[0])
            {
                for (k = 0; k < strlen(pattern); k++)
                {
                    if (a[i][j + k] != pattern[k])
                    {
                        break;
                    }
                }
                if (k == strlen(pattern))
                    return true;
            }
        }
    }
    return false;
}

int main()
{
    fastio;
    int m, n;
    cin >> m >> n;
    char p[] = "canetaazul";
    FOR(i, 0, m)
    {
        FOR(j, 0, n)
        {
            char c;
            cin >> c;
            a[i][j] = tolower(c);
        }
    }
    if (findPattern(m, n, p))
    {
        cout << "SIM" << endl;
    }
    else
    {
        cout << "NAO" << endl;
    }
    return 0;
}