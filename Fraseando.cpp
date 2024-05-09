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
    string s;
    cin >> s;
    int n = s.size();
    map<char, char> mp;
    char c = 'a';
    for (int i = 0; i < n; i++)
    {
        if (mp.find(s[i]) == mp.end())
        {
            mp[s[i]] = c;
            c++;
        }
        // debug(c);
        s[i] = mp[s[i]];
        // c++;
    }
    cout << s << endl;
    return 0;
}