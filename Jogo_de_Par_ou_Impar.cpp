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
    int p,n1,n2;
    cin >> p>> n1>>n2;
    int x = n1+n2;
    bool par=false, impar=false;
    if(x%2==0)
        par=true;
    else
        impar = true;
    if(p==0 && par)
        cout<<0<<endl;
    else if(p==1 && impar)
        cout<<0<<endl;
    else
        cout<<1<<endl;
    return 0;
}