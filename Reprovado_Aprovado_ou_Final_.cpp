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
    double n1, n2;
    cin >> n1 >> n2;
    n1 *= 2;
    n2 *= 3;
    double mf = (n1 + n2) / 5;
    if (mf < 3)
        cout << "Reprovado\n";
    else if (mf >= 7)
        cout << "Aprovado\n";
    else
        cout << "Final\n";

    return 0;
}