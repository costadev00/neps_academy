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
    int a, b, c;
    cin >> a >> b >> c;
    int soma = a + b + c;
    if ((a + b) == c)
        cout << "S\n";
    else if ((a + c) == b)
        cout << "S\n";
    else if ((b + c) == a)
        cout << "S\n";
    else if (a == b || a == c || b == a || b == c)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}