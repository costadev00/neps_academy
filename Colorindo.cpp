TODO:SOLVE
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

const int MAXN = 1010; // Maior tamanho de uma dimensão do tabuleiro que esperamos ler

int n, m;
int board[MAXN][MAXN]; // board[i][j] = 1, se e somente se a célula (i,j) está quebrada

int main()
{
    fastio;
    int n, m, x, y, k;
    while (cin >> n >> m >> x >> y >> k)
    {
        int x1, y1;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                board[i][j] = 0;
        for (int i = 0; i < k; i++)
        {
            cin >> x1 >> y1;
            board[x1][y1] = 1;
        }

    }

    return 0;
}