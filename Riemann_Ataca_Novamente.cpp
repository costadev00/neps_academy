#include <bits/stdc++.h>
using namespace std;

#define maxn 10e6

vector<int> vet;
bool isPrime[maxn];
void crivo(int n)
{
    for (int x = 2; x <= n; x++) // Itera pelo intervalo [2,n]
    {
        if (!isPrime[x]) // Checa se x é primo
            continue;
        vet.push_back(x);
        for (int i = 2 * x; i <= n; i += x) // Itera por todo múltiplo de x maior que ele e menor ou igual a n
            isPrime[i] = false;
    }
}

int main()
{
    int q, n;
    cin >> q;
    crivo(100);
    while (q--)
    {
        cin >> n;
        cout<<vet[n];
    }
}