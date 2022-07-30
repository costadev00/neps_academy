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

//a function that recives a value N and prints the multiplication table of N
void print_table(int N)
{
    FOR(i, 1, N + 1)
    {
        FOR(j, 1, N + 1)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }
}
int main()
{
    fastio;
    int N;
    cin >> N;
    print_table(N);
    return 0;
}