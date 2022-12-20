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
    int n;
    cin >> n;
    vector<pair<string, int>> cargos;
    string cargo;
    cin.ignore();
    for (int i = 0; i < n; i++)
    {
        read(cargo);
        cargos.pb({cargo, i + 1});
    }
    int x;
    cin >> x;
    int mes, ano;
    pair<int, int> data;
    vector<pair<string, pair<int, int>>> posicao;
    for (int i = 0; i < x; i++)
    {
        cin >> mes >> ano;
        data = {mes, ano};
        cin.ignore();
        read(cargo);
        posicao.pb({cargo, {mes, ano}});
    }
    for (int i = 0; i < x; i++)
    {
    cout << posicao[i].second.first << "/" << posicao[i].second.second << " - " << posicao[i].first << endl;
    }
    return 0;
}