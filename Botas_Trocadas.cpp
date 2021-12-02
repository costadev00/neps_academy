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

int main()
{
    fastio;
    int n;
    while (cin >> n)
    {
        int tam;
        char par;
        int cont = 0;
        vi vetd, vete;

        while (n--)
        {
            cin >> tam >> par;
            if (par == 'D')
                vetd.pb(tam);
            else
                vete.pb(tam);
        }
        for (int i = 0; i < vetd.size(); i++)
        {
            for (int j = 0; j < vete.size(); j++)
            {
                if (vetd[i] == vete[j])
                {
                    cont++;
                    vete.erase(vete.begin() + j);
                    break;
                }
            }
        }
        cout << cont << endl;
    }
    return 0;
}