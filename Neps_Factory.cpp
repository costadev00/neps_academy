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
class Pilhas
{
    int a, b, c;

public:
    Pilhas(int a, int b, int c)
    {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    void remover_caixas(char id)
    {
        if (id == 'a')
        {
            if (this->a > 0)
                this->a--;
            if (this->b > 0)
                this->b--;
            if (this->c > 0)
                this->c--;
        }
        else
        {
            if (this->a > 0)
            {
                if (this->a <= 3)
                    this->a = 0;
                else
                    this->a -= 3;
            }
            else if (this->b > 0)
            {
                if (this->b <= 3)
                    this->b = 0;
                else
                    this->b -= 3;
            }
            else if (this->c > 0)
            {
                if (this->c <= 3)
                    this->c = 0;
                else
                    this->c -= 3;
            }
        }
    }

    bool todas_vazias()
    {
        if (this->a == 0 and this->b == 0 and this->c == 0)
            return true;

        return false;
    }
};

int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    Pilhas PA = Pilhas(a, b, c);
    Pilhas PB = Pilhas(a, b, c);

    while (!PA.todas_vazias() && !PB.todas_vazias())
    {
        PA.remover_caixas('a');
        PB.remover_caixas('b');
    }

    if (PA.todas_vazias() && PB.todas_vazias())
    {
        printf("EMPATE");
    }
    else if (PA.todas_vazias())
    {
        printf("MODELO A");
    }
    else
    {
        printf("MODELO B");
    }
}