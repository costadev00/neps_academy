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
    string s;
    map<char, int> mp;
    while (cin >> n)
    {
        while (n--)
        {
            cin >> s;
            for (int i = 0; i < s.length(); i++)
            {
                mp[s[i]]++;
            }
        }
        for (int i = 0; i < 10; i++)
        {
            cout << i << " - " << mp[48 + i] << endl;
        }

        cin.ignore();
    }
    return 0;
}