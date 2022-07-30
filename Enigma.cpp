#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...)
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
    string s1, s2;
    cin >> s1 >> s2;
    int ans = 0;
    deque<char> d;
    for (int i = 0; i < s1.size(); i++)
    {
        d.push_back(s1[i]);
    }

    while (d.size() >= s2.size())
    {
        bool conta = true;
        for (int j = 0; j < s2.length(); j++)
        {
            debug(d[j]);
            debug(s2[j]);
            if (s2[j] == d[j])
            {
                conta = false;
                break;
            }
        }
        if (conta)
            ans++;
        d.pop_front();
    }
    cout << ans << endl;
    return 0;
}