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
    char c;
    int cont = 0;
    for (int i = 0; i < 6; i++)
    {
        cin >> c;
        if (c == 'V')
            cont++;
    }
    if (cont == 5 || cont == 6)
        cout << 1;
    else if (cont == 3 || cont == 4)
        cout << 2;
    else if (cont == 1 || cont == 2)
        cout << 3;
    else
        cout << -1;
    return 0;
}