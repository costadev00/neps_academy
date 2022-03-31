// TODO: SOLVE WITH KNAPSACK
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

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}
int main()
{
    fastio;
    int n, p;
    cin >> p >> n;
    vector<pair<int, int>> vet;
    int pro, peso;
    FOR(i, 0, n)
    {
        cin >> peso >> pro;
        vet.push_back({peso, pro});
    }
    sort(vet.begin(), vet.end(),sortbysec);
    int soma_peso = 0, soma_pro = 0;
    for (auto u : vet)
    {
        // cout << u.first << " " << u.second << endl;
        soma_peso += u.first;
        if (soma_peso > p)
            break;
        soma_pro += u.second;
    }
    cout << soma_pro << endl;
    return 0;
}