#include <stdio.h>

int main()
{
    int n, cont = 0, res = 0;
    scanf("%d",&n);
    int tmp;
    for (int i = 0; i < n; i++)
    {
        int l;
        scanf("%d",&l);
        if(i==0){
            tmp = l;
        }
        if (cont > res)
            res = cont;
        if (l != )
            cont = 0;
        else
            cont++;
    }
    printf("%d\n",res+1);
    return 0;
}