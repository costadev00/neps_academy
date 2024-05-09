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
    int n;
    cin >> n;
    FOR(i, 0, n)
    {
        string s;
        read(s);
        cin.ignore();
        // swap the lower case characters with the upper case characters
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = s[j] - 32;
            }
            else if (s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] = s[j] + 32;
            }
        }
        //reverse s
        reverse(s.begin(), s.end());
        //ROT13
        for(int j=0; j<s.length(); j++)
        {
            if(s[j] >= 'A' && s[j] <= 'Z')
            {
                s[j] = (s[j] - 'A' + 13) % 26 + 'A';
            }
            else if(s[j] >= 'a' && s[j] <= 'z')
            {
                s[j] = (s[j] - 'a' + 13) % 26 + 'a';
            }
        }
        cout << s << endl;
        //buff out s
    }
    return 0;
}