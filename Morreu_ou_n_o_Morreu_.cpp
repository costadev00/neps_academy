#include <bits/stdc++.h>
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

using namespace std;

typedef long long ll;
typedef long double ld;

#define endl "\n"
#define debug(args...) cout << (#args) << " = " << (args) << endl
#define MOD 1000000007
#define vi vector<int>
#define fl forward_list
#define pb push_back
#define pf push_front
#define read(st) getline(cin, st)
#define FOR(i, a, b) for (int i = a; i < b; i++)

struct Personagem
{
    char nome[50];
    int ataque;
    int defesa;
    int vida;

    bool sobreviveu(int dano)
    {
        int tot = dano - defesa;
        if (tot >= vida)
            return false;
        else
            return true;
    }
    //Crie um método que determina se o personagem morreu ou não após receber o golpe.
};

int main()
{
    Personagem personagem;

    int dano;

    scanf("%s", &personagem.nome);
    scanf("%d", &personagem.ataque);
    scanf("%d", &personagem.defesa);
    scanf("%d", &personagem.vida);

    scanf("%d", &dano);

    if (personagem.sobreviveu(dano))
        printf("%s sobreviveu!!!", personagem.nome);
    else
        printf("%s morreu :(", personagem.nome);
}
