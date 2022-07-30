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
    read(s);
    int sz = (int)s.length();
    int cntf = 0;
    int cntt = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == ':')
        {
            if (i != sz - 1 && s[i + 1] == '-')
            {
                if (i != sz - 2 && s[i + 2] == ')')
                    cntf++;
                else if (i != sz - 2 && s[i + 2] == '(')
                    cntt++;
                i++;
            }
        }
    }
    // debug(cntf);
    // debug(cntt);
    if (cntf == cntt)
        cout << "neutro\n";
    else if (cntf > cntt)
        cout << "divertido\n";
    else
        cout << "chateado\n";
    return 0;
}