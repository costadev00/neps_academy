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
    unsigned long long fat[20];
    fat[0] = 1;
    fat[1] = 1;
    fat[2] = 2;
    fat[3] = 6;
    fat[4] = 24;
    fat[5] = 120;
    fat[6] = 720;
    fat[7] = 5040;
    fat[8] = 40320;
    fat[9] = 362880;
    fat[10] = 3628800;
    fat[11] = 39916800;
    fat[12] = 479001600;
    fat[13] = 6227020800;
    fat[14] = 87178291200;
    fat[15] = 1307674368000;
    fat[16] = 20922789888000;
    fat[17] = 355687428096000;
    fat[18] = 6402373705728000;
    fat[19] = 121645100408832000;
    fat[20] = 2432902008176640000;
    unsigned long long n;
    cin >> n;
    int ans = 0;
    for (int i = 20; i >= 0; i--)
    {
        if (n >= fat[i])
        {
            ans += n / fat[i];
            n %= fat[i];
        }
    }
    cout << ans << endl;
    return 0;
}