#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n, t;
    std::cin >> n >> t;

    std::vector<int> v1(n), v2(n);
    std::vector<int> prefix_sum(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        std::cin >> v2[i];
    }

    while (t--)
    {
        int i, j;
        std::cin >> i >> j;

        prefix_sum[i - 1]++;        // Incrementa o prefixo no índice i-1
        if (j < n)
            prefix_sum[j]--;        // Decrementa o prefixo no índice j (se j < n)
    }
    //print prefix_sum
    // for (int i = 0; i < n; i++)
    // {
    //     std::cout << prefix_sum[i] << " ";
    // }
    int current_sum = 0;
    for (int i = 0; i < n; i++)
    {
        current_sum += prefix_sum[i];
        if (current_sum % 2 == 1)   // Se o prefixo é ímpar, realiza a troca
            std::swap(v1[i], v2[i]);
    }

    // Imprime v1
    for (int i = 0; i < n; i++)
    {
        std::cout << v1[i] << " ";
    }

    return 0;
}
