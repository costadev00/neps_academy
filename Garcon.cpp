#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int n, l, c, cont = 0;
    cin >> n;
    while (n--)
    {
        cin >> l >> c;
        if (l > c)
        {
            cont += c;
        }
    }
    cout << cont << endl;

    return 0;
}