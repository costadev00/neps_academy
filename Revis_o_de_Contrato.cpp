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
    char c;
    string s, s2;
    while (cin >> c >> s)
    {
        if (c == '0' && s == "0")
            break;
        int size = s.size();
        for (int i = 0; i < size; i++)
        {
            if (s[i] != c)
            {
                if (s[i] == '0')
                {
                    if (!s2.empty())
                    {
                        s2.pb(s[i]);
                    }
                }
                else
                {
                    s2.pb(s[i]);
                }
            }
        }
        if (!s2.empty())
            cout << s2 << endl;
        else
            cout << 0 << endl;
        s2.clear();
    }
    return 0;
}