// TODO : SOLVE
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
    queue<int> q;
    int c, n, t, d, x;
    vector<pair<int, int>> pessoa;
    int minatual = 0, cont = 0;

    cin >> c >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> t >> d;
        pessoa[i].first = t;
        pessoa[i].second = d;

        q.push(pessoa[i].second);
        cout << pessoa[i].second << endl;
    }

    for (int i = 0; i < q.size(); i++)
    {
        cout << q.front() << endl;
        q.pop();
    }
    return 0;
}