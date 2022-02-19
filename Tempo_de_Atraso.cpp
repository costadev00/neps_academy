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
    int ha, ma, he, me;
    cin >> ha >> ma >> he >> me;
    int tota = (ha * 60) + ma;
    int tote = he * 60 + me;
    tota += 45;

    if (tota <= tote)
        cout << "Sucesso\n";
    else
        cout << "Atrasado " << tota - tote << endl;

    return 0;
}