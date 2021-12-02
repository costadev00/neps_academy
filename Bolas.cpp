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
    int x;
    vi vet;
    for (int i = 0; i < 8; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    for (auto i : vet)
        cout << i << " ";
    bool val = true;

    for (int i = 0; i < 7; i++)
    {
        debug(vet[i]);
        if (vet[i] == vet[i + 1])
        {
            auto it = vet.begin() + i;
            if (vet[i] != vet.back())
            {
                vet.insert(vet.begin(), 1, vet[i]);
                vet.erase(it);
            }
            else if (vet[i] != vet.front())
            {
                vet.push_back(vet[i]);
                vet.erase(it);
            }
            else
            {
                val = false;
                break;
            }
            i = 0;
        }
    }
    if (val)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}