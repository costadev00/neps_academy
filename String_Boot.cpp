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
    string nome1, nome2, s;
    cin >> nome1 >> nome2;
    cin >> n;
    cin.ignore();
    cin >> s;

    if (nome1 != "Reluew" || nome2 != "Markinhos")
    {
        cout << "Nao eh possivel descriptografar!\n";
        return 0;
    }
    int tam = s.length();
    for (int i = 0; i < tam; i++)
    {
        s[i] = s[i] + n;
    }
    cout << s << endl;
    return 0;
}