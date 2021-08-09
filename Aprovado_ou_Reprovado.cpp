#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if ((a + b) / 2 >= 7)
    {
        cout << "Aprovado" << endl;
    }
    else if ((a + b) / 2 < 7 && (a + b) / 2 >= 4)
    {
        cout << "Recuperacao\n";
    }
    else
    {
        cout << "Reprovado\n";
    }
}