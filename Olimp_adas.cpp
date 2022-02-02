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

int n, m;
struct Pais
{
    int id = INT_MAX;
    int ouro = 0, prata = 0, bronze = 0;
};

bool compare(Pais p1, Pais p2)
{
    if (p1.ouro != p2.ouro)
        return p1.ouro > p2.ouro;
    if (p1.prata != p2.prata)
        return p1.prata > p2.prata;
    if (p1.bronze != p2.bronze)
        return p1.bronze > p2.bronze;

    return p1.id < p2.id;
}

int main()
{
    fastio;
    cin >> n >> m;
    Pais p[n];
    for (int i = 0; i < n; i++)
        p[i].id = i + 1;

    int o, pr, b;
    while (m--)
    {
        cin >> o >> pr >> b;
        p[o - 1].ouro++;
        p[pr - 1].prata++;
        p[b - 1].bronze++;
    }

    sort(p, p + n, compare);

    for (int i = 0; i < n; i++)
    {
        cout << p[i].id << " ";
    }
    return 0;
}