#include <iostream>
#include <vector>

bool isPossibleSum(int N, const std::vector<int>& coins) {
    int M = coins.size();
    std::vector<std::vector<bool>> dp(M + 1, std::vector<bool>(N + 1, false));

    // Caso base: É sempre possível obter uma soma igual a 0
    for (int i = 0; i <= M; i++) {
        dp[i][0] = true;
    }

    // Preenchendo a tabela dinâmica
    for (int i = 1; i <= M; i++) {
        for (int j = 1; j <= N; j++) {
            if (j >= coins[i]) {
                dp[i][j] = dp[i - 1][j] || dp[i][j - coins[i]];
            } else {
                dp[i][j] = dp[i - 1][j];
            }
        }
    }

    return dp[M][N];
}

int main() {
    int numCoins;
    int N;

    std::cin >> numCoins;
    std::cin >> N;

    std::vector<int> coins(numCoins);
    for (int i = 0; i < numCoins; i++) {
        std::cin >> coins[i];
    }

    if (isPossibleSum(N, coins)) {
        std::cout << "S" << std::endl;
    } else {
        std::cout << "N" << std::endl;
    }

    return 0;
}
