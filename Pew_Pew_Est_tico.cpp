#include <bits/stdc++.h>
using namespace std;

struct Inimigo
{
    int id;
    int x;
    int y;
    bool vivo;
    static int quantidade_vivos;

    //É necessário ter um construtor sem parâmetros para criar o vetor na função principal
    Inimigo()
    {
        id = -1;
        x = -1;
        y = -1;
        vivo = false;
    }

    Inimigo(int ID, int X, int Y, int VIVO)
    {
        id = ID, x = X, y = Y, vivo = VIVO;
    }

    void foi_acertado(int X, int Y)
    {
        if (x == X && y == Y && vivo){
            quantidade_vivos--;
            vivo =false;
        }
    }
};

int Inimigo::quantidade_vivos = 0;

int main()
{

    int N; //Quantidade de Inimigos
    scanf("%d", &N);

    Inimigo inimigo[N];
    Inimigo::quantidade_vivos = N;

    for (int id = 0; id < N; id++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        inimigo[id] = Inimigo(id, x, y, true);
    }

    int M; //Quantidade de Inimigos
    scanf("%d", &M);

    for (int i = 0; i < M; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);

        for (int id = 0; id < N; id++)
        {
            inimigo[id].foi_acertado(x, y);
        }
    }
    cout << "vivos: " << Inimigo::quantidade_vivos << endl;
    cout << "mortos: " << N - Inimigo::quantidade_vivos << endl;

    //TODO: Imprima a saída conforme indicada no enunciado do exercício.
}
