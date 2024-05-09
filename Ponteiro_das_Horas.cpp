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
    vector<int> vet = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    int a, b;
    cin >> a >> b;
    int pos = a-1;
    pos += b;
    if (pos > 11)
        pos %= 12;
    cout << vet[pos];
    return 0;
}