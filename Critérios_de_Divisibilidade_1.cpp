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
    string n;
    cin >> n;
    int sz = n.size();
    int a = n[sz - 1] - 48;
    if (a % 2 == 0)
        cout << "S\n";
    else
        cout << "N\n";
    int b = 0;
    for (int i = 0; i < sz; i++)
    {
        b += (n[i] - 48);
    }
    if (b % 3 == 0)
        cout << "S\n";

    else
        cout << "N\n";
    if (n[sz - 1] == '0' || n[sz - 1] == '5')
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}