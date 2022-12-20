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
    int vet[n + 1];

    for (int i = 0; i < n; i++)
    {
        cin >> vet[i];
    }
    int sum=0;
    int lucro=0;
    for (int i = 0; i < n; i++)
    {
        sum+=vet[i];
        lucro = max(lucro, sum);
    }
    cout<<100+lucro<<endl;
    return 0;
}