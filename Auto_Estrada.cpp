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
    int x;
    cin >> x;
    cin >> s;
    int sz = (int)s.length();
    int cnt = 0;
    for (int i = 0; i < sz; i++)
    {
        if (s[i] == 'P')
            cnt += 2;
        else if (s[i] == 'M')
            cnt += 2;
        else if (s[i] == 'A')
            cnt++;
        else if (s[i] == 'C')
            cnt += 2;
    }
    cout << cnt << endl;
    return 0;
}