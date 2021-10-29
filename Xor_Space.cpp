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
    FOR(i, 0, s.length())
    {
        if (s[i] == toupper(s[i]))
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }
    cout << s << endl;
    return 0;
}