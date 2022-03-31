#include <stdio.h>

class Matematica
{
public:
    static double media(double a, double b)
    {
        return (a + b) / 2.0;
    }
    static double media(double a, double b, double c)
    {
        return (a + b + c) / 3.0;
    }
    static int media_inteira(int a, int b)
    {
        return (a + b) / 2;
    }
    static int media_inteira(int a, int b, int c)
    {
        return (a + b + c) / 3;
    }

    // TODO: Implemente os 3 métodos que estão faltando.
};

int main()
{

    int N;
    char O;
    scanf("%d %c", &N, &O);

    double a, b, c;

    if (N == 2)
    {
        scanf("%lf %lf", &a, &b);

        if (O == 'R')
        {
            printf("%.2lf\n", Matematica::media(a, b));
        }
        else
        {
            printf("%d\n", Matematica::media_inteira((int)a, (int)b));
        }
    }
    else
    {
        scanf("%lf %lf %lf", &a, &b, &c);
        if (O == 'R')
        {
            printf("%.2lf\n", Matematica::media(a, b, c));
        }
        else
        {
            printf("%d\n", Matematica::media_inteira((int)a, (int)b, (int)c));
        }
    }
}
