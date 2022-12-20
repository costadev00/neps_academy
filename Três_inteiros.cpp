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
    int a, b, c;
    int c1 = 0, c2 = 0;
    cin >> a >> b >> c;
    if (a == 1)
        c1++;
    else
        c2++;
    if (b == 1)
        c1++;
    else
        c2++;
    if (c == 1)
        c1++;
    else
        c2++;
    if(c1>c2)
        cout<<1<<endl;
    else cout<<2<<endl;
    return 0;
}