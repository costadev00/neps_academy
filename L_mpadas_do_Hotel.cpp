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
int a;
int b;

void c1()
{
    if (a == 0)
        a = 1;
    else
        a = 0;
}
void c2()
{
    if (a == 0)
        a = 1;
    else
        a = 0;
    if (b == 0)
        b = 1;
    else
        b = 0;
}

int main()
{
    fastio;
    int ia, ib, fa, fb;
    //c1 == a troca
    //c2 = troca ambas
    while (cin >> ia >> ib >> fa >> fb)
    {
        a = ia;
        b = ib;
        int cont = 0;
        if (a == fa && b == fb){
            cout << cont << endl;
            continue;
        }
        while (true)
        {
            if(a!=fa && b!=fb)
                c2();
            else if (a == b && b != fb)
                c2();
            else
                c1();
            cont++;
            if (a == fa && b == fb)
                break;
        }
        cout << cont << endl;
    }
    return 0;
}