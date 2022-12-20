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
    string s;
    cin >> s;
    double media = 0;
    vi vet;
    FOR(i, 0, s.size())
    {

        // media += s[i] - '0';
        if (s[i] == '0')
        {
            vet.pop_back();
            vet.push_back(10);
            continue;
        }
        vet.push_back(s[i] - '0');
    }
    for (auto u : vet)
    {
        media += u;
        // cout << u << endl;
    }
    cout << fixed << setprecision(2) << media / vet.size() << endl;
    return 0;
}