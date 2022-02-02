#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n;

    while (cin >> n)
    {
        vector<int> divisors; // Armazena os divisores de n

        for (int i = 1; i * i <= n; i++) // Itera pelo intervalo [1,sqrt(n)]
        {
            if (n % i == 0) // Checa se i é um divisor de n
            {
                divisors.push_back(i);

                if (n / i != i) // Checa se podemos adicionar n/i na lista de divisores
                    divisors.push_back(n / i);
            }
        }
        if (divisors.size() == 2)
            cout << "Tio\n";
        else
            cout << "Normal\n";
    }
}
