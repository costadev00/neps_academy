#include <bits/stdc++.h>
using namespace std;
#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)
int main()
{
    fastio;
    int n;
    cin >> n;
    string s;

    vector<string> vet;
    while (n--)
    {
        cin >> s;
        vet.push_back(s);
    }
    int cont = 0;
    for (int i = 0; i < vet.size(); i++)
    {
        for (int j = 0; j < vet.size(); j++)
        {
            if (vet[i] == vet[j] && i != j)
                cont++;
            else if (vet[i].find(vet[j]) != string::npos && i != j)
            {
                // cout << vet[i] << " is a substring of " << vet[j] << endl;
                cont++;
            }
        }
    }

    cout << cont << endl;
    return 0;
}
