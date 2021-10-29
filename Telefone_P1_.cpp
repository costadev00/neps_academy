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
    map<char, char> m;
    m['A'] = '2';
    m['B'] = '2';
    m['C'] = '2';
    m['D'] = '3';
    m['E'] = '3';
    m['F'] = '3';
    m['G'] = '4';
    m['H'] = '4';
    m['I'] = '4';
    m['J'] = '5';
    m['K'] = '5';
    m['L'] = '5';
    m['M'] = '6';
    m['N'] = '6';
    m['O'] = '6';
    m['P'] = '7';
    m['Q'] = '7';
    m['R'] = '7';
    m['S'] = '7';
    m['T'] = '8';
    m['U'] = '8';
    m['V'] = '8';
    m['W'] = '9';
    m['X'] = '9';
    m['Y'] = '9';
    m['Z'] = '9';
    string s;
    cin >> s;
    FOR(i, 0, s.length())
    {
        if (isalpha(s[i]))
        {
            s[i] = m[s[i]];
        }
    }
    cout << s << endl;

    return 0;
}