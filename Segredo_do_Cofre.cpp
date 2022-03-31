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

const int MAXN = 1001;

int main()
{
    int n, q;
    int v[MAXN], psa[MAXN];

    cin >> n >> q;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    psa[0] = v[0];

    for (int i = 1; i < n; i++)
        psa[i] = psa[i - 1] + v[i];

    int mov;
    int lastPos, currentPos;
    lastPos = v[0];
    for (int i = 0; i < q; i++)
    {
        cin >> mov;
        move -= 1;
        currentPos = mov;
        
        // int L, R;
        // cin >> L >> R;

        int sum;

        if (L == 0)
            sum = psa[R]; // Versão mais fácil
        else
            sum = psa[R] - psa[L - 1];

        cout << "Soma do intervalo: " << sum << endl;
    }
}
