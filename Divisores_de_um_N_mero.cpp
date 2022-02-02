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
        sort(divisors.begin(), divisors.end());

        cout << divisors.size() << " divisor(es): ";
        int soma = 0;
        for (int i = 0; i < (int)divisors.size(); i++)
        {
            cout << divisors[i] << " ";
            soma += divisors[i];
        }
        cout << endl;

        cout << "Soma de divisores = " << soma << endl;

        bool isprime = true;
        if (n == 1)
            isprime = false;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
        if (isprime)
            cout << "Primo\n";
        else
            cout << "Nao primo\n";
    }
}
