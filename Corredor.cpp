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
// const int MAXN = 1000010;
const int MAXN = 50001;
const int INF = 1000000010;

int main()
{
    int n;
    int v[MAXN], dp[MAXN]; // dp[i] = maior soma de um intervalo terminando em i

    cin >> n;

    for (int i = 0; i < n; i++)
        cin >> v[i];

    dp[0] = v[0]; // O caso base

    for (int i = 1; i < n; i++)
        dp[i] = max(v[i], dp[i - 1] + v[i]); // Calculando a dp

    int answer = -INF;

    for (int i = 0; i < n; i++)
        answer = max(answer, dp[i]); // Achando a maior dp

    cout << answer;
}
