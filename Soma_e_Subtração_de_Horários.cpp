#include <bits/stdc++.h>
using namespace std;

class Horario
{
public:
    int horas, minutos, segundos;

    Horario() {}

    Horario(int horas, int minutos, int segundos)
    {
        this->horas = horas;
        this->minutos = minutos;
        this->segundos = segundos;
    }

    // TODO: Implementar o operador de adição.
    Horario operator+(Horario b)
    {
        segundos += b.segundos;
        if (segundos > 59)
        {
            segundos -= 60;
            minutos++;
            if (minutos > 59)
            {
                minutos -= 60;
                horas++;
            }
            if (horas > 23)
                horas -= 24;
        }
        minutos += b.minutos;
        if (minutos > 59)
        {
            minutos -= 60;
            horas++;
            if (horas > 23)
                horas -= 24;
        }
        horas += b.horas;
        if (horas > 23)
            horas -= 24;
        return Horario(horas, minutos, segundos);
    }

    // TODO: Implementar o operador de subtração.
    Horario operator-(Horario b)
    {
        segundos -= b.segundos;
        if (segundos <= 0)
        {
            segundos += 60;
            if (segundos == 60)
            {
                segundos = 0;
                minutos++;
            }
            minutos--;
            if (minutos <= 0)
            {
                minutos += 60;
                if (minutos == 60)
                {
                    minutos = 0;
                    horas++;
                }
                horas--;
            }
            if (horas <= 0)
            {
                horas += 24;
                if (horas == 24)
                    horas = 0;
            }
        }
        minutos -= b.minutos;
        if (minutos <= 0)
        {
            minutos += 60;
            if (minutos == 60)
            {
                minutos = 0;
                horas++;
            }
            horas--;
            if (horas <= 0)
            {
                horas += 24;
            }
        }
        horas -= b.horas;
        if (horas <= 0)
        {
            horas += 24;
        }
        if (horas == 24)
            horas = 0;
        return Horario(horas, minutos, segundos);
    }
};

int main()
{
    Horario a, b, c;
    char op;

    scanf("%d:%d:%d", &a.horas, &a.minutos, &a.segundos);
    scanf("%d:%d:%d", &b.horas, &b.minutos, &b.segundos);
    scanf(" %c", &op);

    if (op == 'A')
    {
        c = a + b;
    }
    else if (op == 'S')
    {
        c = a - b;
    }

    printf("%02d:%02d:%02d\n", c.horas, c.minutos, c.segundos);
}
