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
    string s;
    while (cin >> s)
    {
        int k = s.length();
        int number = 0;
        for (int i = k; i >= k - 3 && i > 0; i--)
        {
            int num = s[i - 1] - '0';

            number += num * pow(10, k - i);
        }
        if (number % 4 == 0)
            cout << "S\n";
        else
            cout << "N\n";
        int soma = 0;
        for (int i = 0; i < k; i++)
        {
            int x = s[i] - '0';
            soma += x;
        }
        if (soma % 9 == 0)
            cout << "S\n";
        else
            cout << "N\n";

        if (number % 25 == 0)
            cout << "S\n";
        else
            cout << "N\n";
    }
    return 0;
}