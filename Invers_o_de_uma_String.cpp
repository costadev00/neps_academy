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
    int n, a, b;
    while (cin >> n >> a >> b)
    {
        string s;
        cin >> s;
        string s2;
        for (int i = a; i <= b; i++)
        {
            s2.pb(s[i - 1]);
        }

        reverse(s2.begin(), s2.end());
        s2.pop_back();
        debug(s2);
        s.erase(a, b - a);
        s.insert(a - 1, s2);
        cout << s << endl;
    }

    return 0;
}