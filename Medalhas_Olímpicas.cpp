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
    int o1, p1, b1;
    int o2, p2, b2;
    cin >> o1 >> p1 >> b1;
    cin >> o2 >> p2 >> b2;
    if (o1 != o2)
    {
        if (o1 > o2)
            cout << "A\n";
        else
            cout << "B\n";
    }
    else if (p1 != p2)
    {
        if (p1 > p2)
            cout << "A\n";
        else
            cout << "B\n";
    }
    else
    {
        if (b1 > b2)
            cout << "A\n";
        else
            cout << "B\n";
    }
    return 0;
}