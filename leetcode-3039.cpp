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
    string aux;
    while (!s.empty())
    {
        aux = s;
        set<char> st;
        int sz = s.size();
        for (int i = 0; i < sz; i++)
        {
            auto x = st.insert(s[i]);
            if (x.second)
                s[i] = '0';
        }
        s.erase(remove(s.begin(), s.end(), '0'), s.end());
        if (s.empty())
            break;
        // cout << s << endl;
        st.clear();
    }
    cout << aux;
    return 0;
}