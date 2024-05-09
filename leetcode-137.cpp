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
    vector<int> vet = {2, 2, 3, 2};
    map<int, int> mp;
    for (int i = 0; i < vet.size(); i++)
    {
        mp[vet[i]]++;
    }
    for (auto x : mp)
    {
        if (mp[x.first] == 1){
            cout << x.first;
            break;
        }
        
    }
        // cout << x.first << " " << x.second << endl;
    return 0;
}