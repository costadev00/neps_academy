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
    cin.ignore();
    string id;
    double a, g;
    vector<string> vet;
    while (n--)
    {
        cin >> id;
        cin.ignore();
        cin >> a >> g;
        if (a <= (0.70 * g))
            vet.push_back(id);
    }
    if (vet.size() == 0)
    {
        cout << "*\n";
        return 0;
    }
    for (auto u : vet)
        cout << u << endl;
    return 0;
}