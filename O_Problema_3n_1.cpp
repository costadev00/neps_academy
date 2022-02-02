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
int cont = 0;
// void fp(int n)
// {
//     if (n == 1)
//         return;
//     cont++;
//     fp(n / 2);
// }

// void fi(int n)
// {
//     if (n == 1)
//         return;
//     cont++;
//     fi(3 * n + 1);
// }

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        cont = 0;
        while (n != 1)
        {
            if (n % 2 == 0)
            {
                cont++;
                n /= 2;
            }
            else
            {
                cont++;
                n = 3 * n + 1;
            }
            if (n == 1)
                break;
        }

        cout << cont << endl;
    }
    return 0;
}