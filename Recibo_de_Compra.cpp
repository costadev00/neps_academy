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

const int MAXN = 21; // Maior quantidade de elementos que esperamos ler

int elem = 0;
int sum = 0;
int r, k;
int res = 0;
void backtracking(int i, bool choosed[])
{
    if (i == r) // Nós já escolhemos para todos os números se eles estarão na resposta ou não
    {
        for (int j = 0; j < r; j++) // Imprimindo a resposta atual
        {
            if (choosed[j])
            {
                elem++;
                sum += j;
            }
        }
        return;
    }

    if (sum == r && elem == k)
        res++;
    elem = 0;
    sum = 0;
    choosed[i] = false;
    backtracking(i + 1, choosed); // Não escolher i na resposta atual

    choosed[i] = true;
    backtracking(i + 1, choosed); // Escolher i na resposta atual
}

int main()
{
    fastio;
    bool choosed[MAXN];
    cin >> r >> k;
    backtracking(0, choosed);
    cout << res << endl;
}
