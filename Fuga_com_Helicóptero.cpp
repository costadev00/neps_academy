#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;
#define endl "\n"
#define debug(args...)
//  cout << (#args) << " = " << (args) << endl
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
    vi vet;
    for (int i = 0; i <= 15; i++)
    {
        vet.push_back(i);
    }
    int x;
    int h, p, f, d;
    cin >> h >> p >> f >> d;
    int i = f;
    bool fugiu;
    while (true)
    {
        debug(i);
        if (i == p)
        {
            fugiu = false;
            break;
        }
        if (i == h)
        {
            fugiu = true;
            break;
        }
        if (d == 1)
        {
            if (i == 15)
            {
                i = 0;
                continue;
            }
            i++;
        }
        else
        {
            if (i == 0)
            {
                i = 15;
                continue;
            }
            i--;
        }

        // if (i < 0)
        //     i = i % 15;
        // if (i > 15)
        //     i = i % 15;
    }

    if (fugiu)
        cout << "S\n";
    else
        cout << "N\n";

    return 0;
}