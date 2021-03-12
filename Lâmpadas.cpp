#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    int a = 0, b = 0, n, i;
    cin >> n;
    while (n--)
    {
        cin >> i;
        if (i == 1)
        {
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
        }
        else
        {
            if (a == 0)
            {
                a = 1;
            }
            else
            {
                a = 0;
            }
            if (b == 0)
            {

                b = 1;
            }
            else
            {
                b = 0;
            }
        }
    }
    cout << a << endl;
    cout << b << endl;

    return 0;
}