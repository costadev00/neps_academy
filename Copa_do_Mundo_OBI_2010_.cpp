#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<char> vencedores[5];

    for (char i = 'A'; i <= 'P'; i++)
        vencedores[0].push_back(i);

    for (int fase = 1; fase <= 4; fase++)
    {
        for (int i = 0; i < vencedores[fase - 1].size(); i += 2)
        {
            int equipe1 = vencedores[fase - 1][i];
            int equipe2 = vencedores[fase - 1][i + 1];
            int gols1, gols2;

            scanf("%d %d", &gols1, &gols2);

            if (gols1 > gols2)
                vencedores[fase].push_back(equipe1);
            else
                vencedores[fase].push_back(equipe2);
        }
    }

    printf("%c\n", vencedores[4][0]);
}
