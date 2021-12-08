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
    double n;
    cin >> n;
    int cont = 0, cont1 = 0, cont050 = 0, cont025 = 0, cont010 = 0, cont005 = 0,cont001=0;
    n /= 100;
    // cout<<n<<endl;
    while (n >= 0.0)
    {
        while (n >= 1)
        {
            n -= 1;
            cont1++;
        }
        while (n >= 0.50)
        {
            n -= 0.50;
            cont050++;
        }
        while (n >= 0.25)
        {
            n -= 0.25;
            cont025++;
        }
        while (n >= 0.10)
        {
            n -= 0.10;
            cont010++;
        }
        while (n >= 0.05)
        {
            n -= 0.05;
            cont005++;
        }
        while(n>=0.01){
            n-=0.01;
            cont001++;
        }
    }
    cout << cont << endl;
    cout << cont1 << endl;
    cout << cont050 << endl;
    cout << cont025 << endl;
    cout << cont010 << endl;
    cout << cont005 << endl;
    cout << cont001 << endl;
    return 0;
}