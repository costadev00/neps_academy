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
    int n;
    cin >> n;
    vector<int> vet;
    for (int i = 1; i <= n; i++)
        vet.pb(i);
    cout << endl;
    int m;
    cin >> m;
    int x;
    vector<int> rem;
    while (m--)
    {
        cin >> x;
        for (int i = 1; i <= n; i++)
        {
            if (x % i == 0)
                rem.push_back(i);
            // vet.erase(vet.begin() + i);
        }
        for (auto u : rem)
            vet.erase(vet.begin() + u);
        rem.clear();
    }
    for (auto u : vet)
        cout << u << endl;
    return 0;
}