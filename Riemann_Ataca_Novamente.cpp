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

// sieve of eratosthenes
void sieve(int n)
{
    vector<int> isprime;

    int j = 1;
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
            debug(j);
            j++;
        }
    }
}
int main()
{
    fastio;
    sieve(10);
    int n;
    cin >> n;

    while (n--)
    {
        int x;
        cin >> x;
    }
    return 0;
}