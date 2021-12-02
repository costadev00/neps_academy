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
    int c, x, aux = 0;
    set<int> s;
    // int rep[100000] = {0};
    map<int, int> vistos;
    while (cin >> c)
    {
        while (c--)
        {
            cin >> x;
            vistos[x]++;
            if (vistos[x] > 2)
            {
                aux += 2;
                vistos[x] = 0;
            }
            s.insert(x);
        }
    }
    cout << s.size() * 2 + aux;
    return 0;
}