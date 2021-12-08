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
    int n, m2 = 0, m3 = 0, m4 = 0;
    cin >> n;
    int x;
    while (n--)
    {
        cin >> x;
        if (x % 2 == 0)
            m2++;
        if (x % 3 == 0)
            m3++;
        if (x % 4 == 0)
            m4++;
    }
    cout << m2 << endl;
    cout << m3 << endl;
    cout << m4 << endl;
    return 0;
}