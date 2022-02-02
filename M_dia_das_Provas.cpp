#include <bits/stdc++.h>

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

struct Prova
{
    int nota, peso;
};

int main()
{
    Prova A, B, C;
    scanf("%d %d", &A.nota, &A.peso);
    scanf("%d %d", &B.nota, &B.peso);
    scanf("%d %d", &C.nota, &C.peso);

    printf("%d\n", ((A.nota * A.peso) + (B.nota * B.peso) + (C.nota * C.peso)) / (A.peso + B.peso + C.peso));
    return 0;
}