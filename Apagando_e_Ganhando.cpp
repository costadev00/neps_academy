#include <bits/stdc++.h>

using namespace std;

int n, d;
string digit, ans;

int main()
{
    while (cin >> n >> d)
    {
        if (n == 0 && d == 0)
            return 0;

        cin >> digit;

        int erased = 0;
        for (char cur : digit)
        {
            while (ans.size() > 0 && cur > ans.back() && erased < d)
            {
                ans.pop_back();
                erased++;
            }

            if (ans.size() < n - d)
                ans.push_back(cur);
        }

        cout << ans << "\n";

        digit.clear();
        ans.clear();
    }

    return 0;
}
