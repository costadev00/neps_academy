#include <stdio.h>

int main()
{
    int n, cont = 0, res = 0;
    scanf("%d",&n);
    int vet[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&vet[i]);
    }
    for (int i = 0; i < n-1; i++)
    {
        if (cont > res)
            res = cont;
        if (vet[i] != vet[i + 1])
            cont = 0;
        else
            cont++;
    }
    printf("%d\n",res + 1);
    return 0;
}