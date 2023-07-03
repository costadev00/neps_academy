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
    int n, m;
    cin >> n >> m;
    int v[n];
    int sum = 0;
    FOR(i, 1, n+1)
    {
        cin >> v[i];
    }
    FOR(i,0,m){
        int a,b;
        cin >> a>>b;
        for(int i=a;i<=b;i++)
            sum+=v[i];
    }
    cout << sum << endl;
    return 0;
}