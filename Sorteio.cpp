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
    FOR(i, 0, n)
    {
        int x;
        cin >> x;
        vet.pb(x);
    }
    int mid = n / 2;
    if (n % 2 == 0)
        mid -= 1;

    cout << vet[0] << endl;
    cout << vet[mid] << endl;
    cout << vet[n - 1] << endl;
    return 0;
}