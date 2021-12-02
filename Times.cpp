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
    int n, t;
    priority_queue<pair<int, string>> p;
    vector<vector<string>> team;
    string nome;
    int hab;

    cin >> n >> t;
    for (int i = 0; i < t; i++)
        team.push_back(vector<string>());

    for (int i = 0; i < n; i++)
    {
        cin >> nome >> hab;
        p.push(make_pair(hab, nome));
    }
    int tatual = 0;
    while (p.size() > 0)
    {
        team[tatual].pb(p.top().second);
        p.pop();
        tatual = (tatual + 1) % t;
    }

    for (int i = 0; i < t; i++)
    {
        sort(team[i].begin(), team[i].end());

        cout << "Time " << i + 1 << "\n";
        for (int j = 0; j < team[i].size(); j++)
        {
            cout << team[i][j] << "\n";
        }
        cout << "\n";
    }
    return 0;
}