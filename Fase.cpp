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
    int c;
    cin >> c;
    int x;
    vector<int> vet;
    while (n--)
    {
        cin >> x;
        vet.pb(x);
    }
    sort(vet.begin(), vet.end(), greater<int>());
    // for (auto u : vet)
    //     cout << u << " ";
    int res = c;
    int i = c - 1;
    while (true)
    {
        if (vet[i] == vet[i + 1])
            res++;
        else
            break;
        i++;
    }
    cout << res << endl;
    return 0;
}