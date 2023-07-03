#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set<vector<int>> s;
    vector<int> v2;

    vector<int> v;
    for (int i = 1; i <= n; i++)
        v.push_back(i);
    vector<int> ans;
    do
    {
        for (int i = 0; i < v.size(); i++)
            v2.push_back(v[i]);
        s.insert(v2);
        v2.clear();
    } while (next_permutation(v.begin(), v.end()));

    int fact = 1;
    for (int i = n; i >= 1; i--)
        fact *= i;
    for (int i = 0; i < fact - 1; i++)
    {
        v2.clear();
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            v2.push_back(x);
        }
        auto r = s.insert(v2);
        if (r.second != 1)
            s.erase(v2);

        cout << endl;
    }
    // print s
    for (auto u : s)
    {
        for (auto v : u)
            cout << v << " ";
        cout << endl;
    }
    return 0;
}