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

// Comparator function to sort pairs
// according to second value
bool cmp(pair<int, int> &a,
         pair<int, int> &b)
{
    return a.second > b.second;
}

// Function to sort the map according
// to value in a (key-value) pairs
void sort(map<int, int> &M)
{

    // Declare vector of pairs
    vector<pair<int, int>> A;

    // Copy key-value pair from Map
    // to vector of pairs
    for (auto &it : M)
    {
        A.push_back(it);
    }

    // Sort using comparator function
    sort(A.begin(), A.end(), cmp);

    // Print the sorted value
    int maior = A[0].second;
    vector<int> vet;

    for (auto &it : A)
    {
        if (it.second == maior)
            vet.push_back(it.first);
    }
    sort(vet.begin(), vet.end());
    for (auto u : vet)
        cout << u << " ";
}

int main()
{
    fastio;
    int n;
    cin >> n;
    int x;
    map<int, int> mp;
    while (n--)
    {
        cin >> x;
        mp[x]++;
    }
    sort(mp);
    // for (auto u : mp)
    // cout << u.first << " " << u.second << endl;
    return 0;
}