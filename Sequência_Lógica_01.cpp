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
    int a = 0;
    int b = 1;
    int i = 0;
    while (a <= 30)
    {
        while (i < 2)
        {
            cout << "a = " << a << " <-> "
                 << "b = " << b++ << endl;
            i++;
        }
        i = 0;
        a += 2;
        b++;
    }
    return 0;
}