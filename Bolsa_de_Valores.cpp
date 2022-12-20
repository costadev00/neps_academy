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

// a function "maxProfit" that calculate the maximum profit that an investor could have earned, investing during some of the N days with a tax C for each buy, the investor can buy multiple times.
// the function takes as input the vector of prices, the number of days, the tax C and the output is the maximum profit that the investor could have earned
// the investor can have only one stock at the end of the day, so the function should return the maximum profit that the investor could have earned
// the function should return -1 if the investor could not have made any profit

int maxProfit(vector<int> prices, int n, int C)
{
    int max_profit = 0;
    int min_price = prices[0];
    for (int i = 1; i < n; i++)
    {
        if (prices[i] < min_price)
            min_price = prices[i];
        if (prices[i] - min_price > max_profit)
            max_profit = prices[i] - min_price -C;
    }
    if (max_profit > 0)
        return max_profit;
    else
        return -1;
}

int main()
{
    fastio;
    int n, tx;
    cin >> n >> tx;
    vector<int> vet;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        vet.pb(x);
    }
    cout << maxProfit(vet, n, tx);
    return 0;
}