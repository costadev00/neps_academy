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
    int l1,a1,l2,a2;
    cin>>l1>>a1>>l2>>a2;
    if(l1*a1>l2*a2)
        cout<<"Primeiro\n";
    else if(l1*a1 == l2*a2)
        cout<<"Empate\n";
    else
    cout<<"Segundo\n";

    return 0;
}