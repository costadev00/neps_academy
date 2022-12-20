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
#define N 1000000
string start, goal;
queue<pair<vector<string>>> q;
bool visited[N + 1];
map<string, vector<string>> m;
// do a bfs on m and find the shortest path
void bfs()
{
    q.push({start});
    visited[start] = true;
    while (!q.empty())
    {
        auto curr = q.front();
        q.pop();
        if (curr.back() == goal)
        {
            for (auto i : curr)
                cout << i << " ";
            return;
        }
        for (auto i : m[curr.back()])
        {
            if (!visited[i])
            {
                visited[i] = true;
                curr.push_back(i);
                q.push(curr);
                curr.pop_back();
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    string s1, s2;
    for (int i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        m[s1].push_back(s2);
    }
    // print the map
    for (auto i : m)
    {
        cout << i.first << " ";
        for (auto j : i.second)
            cout << j << " ";
        cout << endl;
    }
    cin >> start >> goal;
    bfs();
    return 0;
}