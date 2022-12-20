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
    int n, c;
    cin >> n >> c;
    string s, alfa = "abcdefghijklmnopqrstuvwxyz";
    map<string, int> m;
    while (n--)
    {
        cin >> s;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '*')
            {
                for (int j = 0; j < alfa.size(); j++)
                {
                    s[i] = alfa[j];
                    m[s]++;
                }
                break;
            }
        }
    }
    // print m
    string res;
    int ans = INT_MIN;
    for (auto i : m)
    {
        if (i.second > ans)
        {
            ans = i.second;
            res = i.first;
        }
    }
    cout << res << " " << ans << endl;
    return 0;
}