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
    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;
    if ((n1 >= n2 && n1 <= n3) || n1 <= n2 && n1 >= n3)
        cout << n1 << endl;
    else if ((n2 >= n1 && n2 <= n3) || (n2 <= n1 && n2 >= n3))
        cout << n2;
    else
        cout << n3;
    return 0;
}