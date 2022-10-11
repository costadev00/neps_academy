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

void altera(vector<int> *v){
    v->push_back(10);
}
int main()
{
  vector<int> v({1,2,3,4,5,6});

    vector<int> vet(10,5);
    altera(&vet);
    for(auto u: vet)
        cout<<u<<" ";
    return 0;
}