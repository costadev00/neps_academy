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
    if (n == 1){
        cout << 1 << endl;
        return 0;
    }
    vi vet;
    vet.push_back(1);
    vet.push_back(1);
    for (int i = 2; i < n; i++)
    {
        vet.push_back(vet[i - 1] + vet[i - 2]);
    }
    reverse(vet.begin(), vet.end());
    for (auto u : vet)
        cout << u << " ";
    cout<<endl;
    return 0;
}