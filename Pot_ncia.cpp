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
    int n, p = 0, num = 0;
    double tot = 0.0;
    cin >> n;
    cin.ignore();
    while (n--)
    {
        string s;
        cin >> s;
        cin.ignore();
        p = s[s.length() - 1] - 48;

        num = 0;
        int d = 0;
        int cont = 1;
        int aux = 1;
        for (int i = s.length() - 2; i >= 0; i--)
        {
            aux = s[i] - 48;
            for (int j = 0; j < d; j++)
            {
                aux *= 10;
            }
            num += aux;
            d++;
        }
        tot += pow(num, p);
    }
    cout << (int)tot << endl;
    return 0;
}