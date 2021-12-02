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
    int n, r, x;
    while (cin >> n >> r)
    {
        bool rem = false;
        vi vet;
        for (int i = 1; i <= n; i++)
        {
            vet.pb(i);
        }
        for (int i = 0; i < r; i++)
        {
            cin >> x;
            auto it = find(vet.begin(), vet.end(), x);
            vet.erase(it);
        }
        if (n == r)
            cout << "*";
        else
            for (auto i : vet)
                cout << i << " ";
    }
    return 0;
}