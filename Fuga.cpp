//code by thiago mota
#include<bits/stdc++.h>
#define fastio                      \
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

vector<vector<int>> grid;
int best = 0;
int n, m, oi, oj, di, dj;
int dx[] = {1, -1, 0, 0}, dy[] = {0, 0, 1, -1};
void solve(int i, int j, int dist)
{
    if (i < 1 || i > n || j < 1 || j > m || grid[i][j])
        return;
    grid[i][j] = 1;
    if (i == di && j == dj)
    {
        best = max(best, dist);
        grid[i][j] = 0;
        return;
    }

    for (int k = 0; k < 4; ++k)
    {
        solve(i + dx[k], j + dy[k], dist + 1);
    }

    grid[i][j] = 0;
}
int main()
{
    fastio;
    cin >> n >> m >> oi >> oj >> di >> dj;
    grid.assign(n + 1, vector<int>(m + 1, 0));
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= m; ++j)
        {
            if (i % 2 == 0 && j % 2 == 0)
                grid[i][j] = 1;
        }
    }

    solve(oi, oj, 0);
    cout << 1 + best << '\n';
    return 0;
}