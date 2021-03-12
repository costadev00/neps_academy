#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, cont = 0, res = 0;
    cin >> n;
    int x[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    for (int i = 1; i <= n; i++)
    {
        res = max(cont, res);
        if (x[i] != x[i - 1])
        {
            cont = 0;
        }
        else
        {
            cont++;
        }
    }
    cout << res + 1 << endl;
    return 0;
}