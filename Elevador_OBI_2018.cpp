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
    int x;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end());
    bool ans = true;
    if (vet[0] > 8)
        ans = false;
    else
    {
        for (int i = 0; i < n - 1; i++)
        {
            if (abs(vet[i] - vet[i + 1]) > 8)
            {
                ans = false;
                break;
            }
        }
    }
    if (ans)
        cout << "S\n";
    else
        cout << "N\n";
    return 0;
}