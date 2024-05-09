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

struct Retangulo
{
    int x1, y1, x2, y2;
};
int main()
{
    fastio;
    int x1, y1, x2, y2;
    //le os pontos do retangulo
    cin >> x1 >> y1 >> x2 >> y2;
    //cria um retangulo
    Retangulo r1 = {x1, y1, x2, y2};
    //le os pontos do retangulo
    cin >> x1 >> y1 >> x2 >> y2;
    //cria um retangulo
    Retangulo r2 = {x1, y1, x2, y2};
    //verifica se os retangulos se intersectam
    if (r1.x1 <= r2.x2 && r1.x2 >= r2.x1 && r1.y1 <= r2.y2 && r1.y2 >= r2.y1)
        cout << 1 << endl;
    else
        cout << 0 << endl;
    return 0;
}