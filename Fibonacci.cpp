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
    int vet[31];
    vet[0] = 1;
    vet[1] = 1;
    for (int i = 2; i < 31; i++)
    {
        vet[i] = vet[i - 1] + vet[i - 2];
        // debug(vet[i]);
        // debug(i);
    }
    cout << vet[n] << endl;
    // for (auto i : vet)
    // cout << i << endl;
    // cout << vet[i] << endl;
    // cout << vet[n + 1] << endl;
    return 0;
}