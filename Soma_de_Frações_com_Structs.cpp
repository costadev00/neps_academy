#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Adicione o código da sua Struct aqui!

struct Fracao
{
    int numerador, denominador;
};
// Função que calcula o máximo divisor comum entre a e b.
long long mdc(int a, int b)
{
    return (b == 0 ? a : mdc(b, a % b));
}

int main()
{
    Fracao A, B;
    scanf("%d %d %d %d", &A.numerador, &A.denominador, &B.numerador, &B.denominador);

    Fracao C;
    C.numerador = (A.numerador * B.denominador) + (A.denominador * B.numerador);
    C.denominador = A.denominador * B.denominador;

    int MDC = mdc(C.numerador, C.denominador);

    printf("%d %d", C.numerador / MDC, C.denominador / MDC);
}
