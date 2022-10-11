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
    map<int, int, greater<int>> m;
    int x;
    int n = 5;
    while (n--)
    {
        cin >> x;
        m[x]++;
    }
    if (m.size() == 1)
        cout << "5 0" << endl;
    else if (m.size() == 5)
        cout << "1 1" << endl;
    else
    {
        int cont = 0;
        for (auto u : m)
        {
            cout << u.second << " ";
            cont++;
            if (cont == 2)
                break;
        }
    }
    return 0;
}