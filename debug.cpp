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
    priority_queue<pair<int, string>> p;
    p.push(make_pair(15, "massa"));
    p.push(make_pair(25, "alonso"));
    p.push(make_pair(150, "hamilton"));
    p.push(make_pair(15000, "senna"));
    p.push(make_pair(12, "legreng"));

    pair<int, string> top;
    while (!p.empty())
    {
        top = p.top();
        cout << top.second << endl;
        p.pop();
    }

    return 0;
}