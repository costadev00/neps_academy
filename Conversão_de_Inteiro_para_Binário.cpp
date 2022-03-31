#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    string bin = "";

    cin >> n;

    stack<int> restos; // Criando a pilha

    // Caso a entrada seja 0, já imprimi o resultado e encerre o programa
    if (n == 0)
    {
        cout << '0';
        return 0;
    }
    // Percorre todas as divisões, e guarde o resto em uma pilha, até N ser igual a 0
    while (n > 0)
    {
        restos.push(n % 2);
        n = n / 2;
    }

    // Criando a string com o binário a partir da leitura da pilha
    while (!restos.empty())
    {
        n = restos.top();
        restos.pop();

        (n == 1) ? bin += '1' : bin += '0';
    }
    cout << bin << endl;
}
