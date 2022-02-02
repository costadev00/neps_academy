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
    string s1, s2;
    int n;
    while (cin >> n)
    {
        cin.ignore();
        read(s1);
        read(s2);
        for (int i = 0; i < s1.size(); i++)
        {
            if (s1[i] == ' ' || s1[i] == '.' || s1[i] == ',')
            {
                s1.erase(s1.begin() + i);
                --i;
            }
        }
        for (int i = 0; i < s2.size(); i++)
        {
            if (s2[i] == ' ' || s2[i] == '.' || s2[i] == ',')
            {
                s2.erase(s2.begin() + i);
                --i;
            }
        }
        sort(s1.begin(), s1.end());
        sort(s2.begin(), s2.end());
        // cout << s1 << endl
        //      << s2 << endl;
        if (s1 == s2)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}