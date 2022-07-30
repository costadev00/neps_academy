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

int search(vector<int> a, int L, int R, int value)
{
    int mid = (L + R) / 2; // Meio do intervalo

    if (L > R)     // Intervalo invalido
        return -1; // Valor não encontrado

    if (a[mid] == value) // O valor foi encontrado
        return mid;

    if (a[mid] < value) // Descarto o intervalo à esquerda
        return search(a, mid + 1, R, value);
    else // Descarto o intervalo à direita
        return search(a, L, mid - 1, value);
}
int main()
{
    fastio;
    int n;
    cin >> n;
    int x;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        vet.pb(x);
    }
    int s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        int f = abs(s - vet[i]);
        // int el = search(vet, 0, n - 1, f);
        auto el = lower_bound(vet.begin(), vet.end(), f);
        // debug(vet[i]);
        // debug(*el);
        // debug(vet[el]);
        if (*el ==f)
        {
            cout << vet[i] << " " << *el << endl;
            break;
        }
    }
    return 0;
}