#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

#define pb push_back

int main()
{
    fastio;
    vector<int> vet;
    vet.pb(1);
    vet.pb(2);
    vet.pb(4);
    vet.pb(5);
    vet.pb(7);
    auto it = lower_bound(vet.begin(), vet.end(), 44);
    cout << *it << endl;
    return 0;
}