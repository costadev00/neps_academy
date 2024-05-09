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
    vector<int> v(n);
    FOR(i, 0, n)
    {
        cin >> v[i];
    }
    int n2;
    cin >> n2;
    vector<int> v2(n2);
    FOR(i, 0, n2)
    {
        cin >> v2[i];
    }
    int maxn = max(n,n2);
    //how many times maxequal is updated
    int maxequal = 0;
    int ans=0;
    FOR(i, 0, maxn)
    {
       if(v[i]==v2[i])
        {
            if(maxequal<v[i])
            {
                maxequal=v[i];
                ans++;
            }
        }
    }
    cout<<ans<<endl;

    return 0;
}