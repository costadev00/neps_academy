//TODO:SOLVE
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
    string nome, sobrenome, familia;
    cin >> nome >> sobrenome >> familia;

    int n;
    cin >> n;
    cin.ignore();
    int p = 0, i = 0;
    string nom, sbr, fml;
    for (int i = 0; i < n; i++)
    {
        cin >> nom >> sbr >> fml;
        if (sbr[2] == sobrenome[2])
            i++;
        if (fml[2] == familia[2])
            p++;
    }
    cout << p << " " << i << endl;
    return 0;
}