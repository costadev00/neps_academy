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
    int p, s;
    vector<pair<int, int>> vet;
    while (cin >> p >> s)
    {
        int u, v;
        FOR(i, 0, s)
        {
            cin >> u >> v;
            vet.push_back(make_pair(u, v));
        }
        sort(vet.begin(), vet.end());
        int resi, resf;
        for (int i = 0; i < s - 1; i++)
        {
            if (vet[i].second < vet[i + 1].first)
                cout << vet[i].first << " " << vet[i].second << endl;
            else
            {
                resi = vet[i + 1].first;
                resf = vet[i + 1].second;
            }
        }
        cout << resi << " " << resf << endl;
    }
    return 0;
}