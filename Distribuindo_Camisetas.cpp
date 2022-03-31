//TODO: SOLVE
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
    int j, a;
    cin >> j >> a;
    char x;
    map<int, char> c;
    for (int i = 1; i <= j; i++)
    {
        cin >> x;
        c[i] = x;
    }
    int num;
    int cont = 0;
    for (int i = 0; i < a; i++)
    {
        cin >> x >> num;

        if (c[num] == x)
        {
            cont++;
            c[num] = '0';
        }
    }
    cout << cont << endl;
    return 0;
}