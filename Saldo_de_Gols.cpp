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

const int MAXN = 10001;
const int INF = 1000000010;

int main()
{
    fastio;
    int n;
    int t = 0;
    while (cin >> n)
    {
        if (n == 0)
            return 0;
        int x, y;
        vector<int> v;
        int dp[MAXN], opt[MAXN];
        for (int i = 0; i < n; i++)
        {
            cin >> x >> y;
            int saldo = x - y;
            v.pb(saldo);
        }
        cout << "Teste " << ++t << endl;

        dp[0] = v[0];
        opt[0] = 0;
        int cursum = 0, answer = -1e9;
        for (int k = 0; k < n; ++k)
        {
            cursum += v[k];
            answer = max(answer, cursum);
            cursum = max(cursum, 0);
        }
        int i = 0, j = 0;
        pair<int, int> ans = {0, 0};
        cursum = 0;
        for (int k = 0; k < n; ++k)
        {
            cursum += v[k];
            if (cursum == answer && j - i >= ans.second - ans.first)
                ans = {i, j};

            if (cursum < 0)
                i = j = k + 1;
            else
                j++;
            cursum = max(cursum, 0);
        }

        if (answer <= 0)
            cout << "nenhum\n";
        else
            cout << ans.first + 1 << " " << ans.second + 1 << endl;
        cout << endl;
    }
    return 0;
}