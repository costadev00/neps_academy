#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

const int MAXN = 1010;
const int MAXS = 1010;
const int INF = 1000000010;

int w[MAXN], v[MAXN], dp[MAXN][MAXS];
int n, S;

int knapsack()
{
    int s = 0; // ÍNdice que maximiza dp[n][s]
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j <= S; j++)
        {
            if (w[i] > j)
                dp[i][j] = dp[i - 1][j];
            else
            {
                if (dp[i - 1][j] <= dp[i - 1][j - w[i]] + v[i]) // A melhor opção é pegar o i-ésimo item
                    dp[i][j] = dp[i - 1][j - w[i]] + v[i];
                else // A melhor opção é não pegar o i-ésimo item
                    dp[i][j] = dp[i - 1][j];
            }
        }
    }

    for (int i = 1; i <= S; i++)
    {
        if (answer < dp[n][i])
        {
            s = i;
            answer = dp[n][i];
        }
    }
    return answer;
}

int main()
{
    cin >> S >> n;

    for (int i = 1; i <= n; i++)
        cin >> w[i] >> v[i];

    dp[0][0] = 0;

    for (int i = 1; i <= S; i++)
        dp[0][i] = -INF;

    cout << knapsack() << endl;
}
