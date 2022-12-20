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

int lcs(string x, string y)
{
    int m = x.length();
    int n = y.length();
    int res = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            if (x[i] == y[j])
            {
                int c = 0;
                for (int k = 0; k + i < m, k + j < n; k++)
                {
                    if (x[k + i] != y[k + j])
                        break;
                    c++;
                }
                if (c > res)
                    res = c;
            }
        }
    // cout << res << endl;
    debug(res);
    return res;
}

int main()
{
    fastio;
    int n, m;
    cin >> n >> m;
    cin.ignore();

    string s;
    vector<string> dic;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        dic.push_back(s);
    }
    while (m--)
    {
        cin >> s;
        for (int i = 0; i < n; i++)
        {
            if (lcs(s, dic[i]) <= 2)
                cout << dic[i] << " ";
        }
        cout << endl;
    }
    return 0;
}