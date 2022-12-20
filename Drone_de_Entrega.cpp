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
    int a, b, c, h, l;
    cin >> a >> b >> c >> h >> l;
    // int win  = h*l;
    // if(a*b<=win || a*c<=win || b*c<=win)
    //     cout << "S" << endl;
    // else
    //     cout << "N" << endl;
    if((b<=l && a<=h) || (c<=l && a<=h) || (b<=h && a<=l)||(c<=h && a<=l)||(b<=l && c<=h)||(b<=h && c<=l))
        cout << "S" << endl;
    else
        cout << "N" << endl;
    return 0;
}