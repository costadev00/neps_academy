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

const int MAXN = 10010;

int main()
{
    int n, k;
    vector<int> v;
    int cont = 0;
    int x;
    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());

    int i = 0, j = n - 1; // Os dois ponteiros
    while (i <= j)
    {
        if (v[i] + v[j] <= k) // Primeiro caso
        {
            i++, j--;
            cont++;
            continue;
        }

        if (v[i] + v[j] > k)
            cont++, j--;
        else if (v[i] + v[j] < k) // Segundo caso
            i++;
        else // Terceiro caso
            j--;
    }
    cout << cont;
    // cout << "Não há nenhum par com a soma desejada" << endl;
}
