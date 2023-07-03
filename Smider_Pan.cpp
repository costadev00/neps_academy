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

int calculateMaxJumps(const vector<int> &buildings)
{
    int n = buildings.size();
    int maxJumps = 0;
    int currentHeight = 0;
    int currentIndex = 0;
    int maxHeight = -1;
    for (int i = 0; i < n; i++)
    {
        maxHeight = max(buildings[i], maxHeight);
    }
    debug(maxHeight);
    return maxJumps;
}

int main()
{
    int n;
    cin >> n;

    vector<int> buildings(n);
    for (int i = 0; i < n; i++)
    {
        cin >> buildings[i];
    }

    int maxJumps = calculateMaxJumps(buildings);

    cout << maxJumps << endl;

    return 0;
}
