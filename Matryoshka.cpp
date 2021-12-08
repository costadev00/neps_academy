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
    int x;
    vector<int> vet;
    FOR(i, 0, n)
    {
        cin >> x;
        vet.pb(x);
    }
    vi vetaux(vet);
    sort(vetaux.begin(),vetaux.end());

    vi res;
    int cont = 0;
    FOR(i, 0, n)
    {
        if(vet[i]!=vetaux[i]){
            cont++;
            res.pb(vet[i]);
        }    
    }
    sort(res.begin(), res.end());
    cout << cont << endl;
    for (auto i : res)
        cout << i << " ";
    return 0;
}