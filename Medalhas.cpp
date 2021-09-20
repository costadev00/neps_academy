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
    int x;
    vi vet;
    cin >> x;
    vet.pb(x);
    cin >> x;
    vet.pb(x);
    cin >> x;
    vet.pb(x);
    vi vet2;
    vi vetord;
    vet2 = vet;
    sort(vet.begin(), vet.end());
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (vet[i] == vet2[j])
                vetord.pb(j + 1);
        }
    }
    for (auto i : vetord)
        cout << i << endl;

    return 0;
}