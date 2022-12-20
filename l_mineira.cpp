#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;
    int n;
    cin >> n;
    char m[s.size()][n];
    memset(m, 0, sizeof(m));
    int ct = 0, f = 1;
    // MARCA AS POSICOES DA MATRIZ
    for (int i = 0; i < s.size(); i++)
    {
        m[i][ct] = 1;
        if (f)
            ct++;
        else
            ct--;
        if (ct >= n)
        {
            f = 0;
            ct = n - 2;
        }
        else if (ct < 0)
        {
            ct = 1;
            f = 1;
        }
    }

    ct = 0;
    // PREENCHE A MATRIZ
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < s.size(); j++)
        {
            if (m[j][i])
                m[j][i] = s[ct++];
        }
    }

    ct = 0;
    // IMPRIME A MATRIZ DESCRIPTOGRAFADA    
    for (int i = 0; i < s.size(); i++)
    {
        printf("%c", m[i][ct]);
        if (f)
            ct++;
        else
            ct--;
        if (ct >= n)
        {
            f = 0;
            ct = n - 2;
        }
        else if (ct < 0)
        {
            ct = 1;
            f = 1;
        }
    }
    return 0;
}