#include <bits/stdc++.h>
using namespace std;

const int mxn = 1e5 + 5;

int n, m, parent[mxn], sz[mxn], score[mxn];

int find(int value)
{
    if (parent[value] == value)
        return value;

    return parent[value] = find(parent[value]);
}

void merge(int i, int j)
{
    i = find(i), j = find(j);

    if (i == j)
        return;

    if (sz[i] >= sz[j])
    {
        parent[j] = i;
        sz[i] += sz[j];
        score[i] += score[j];
    }
    else
    {
        parent[i] = j;
        sz[j] += sz[i];
        score[j] += score[i];
    }
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    while (cin >> n >> m && (n + m))
    {

        for (int i = 1; i <= n; i++)
            cin >> score[i];

        for (int i = 1; i <= n; i++)
        {
            parent[i] = i;
            sz[i] = 1;
        }

        int ans = 0;

        while (m--)
        {
            int op, a, b;
            cin >> op >> a >> b;
            if (op == 1)
                merge(a, b);
            else
            {
                a = find(a), b = find(b);
                if (score[a] == score[b])
                    continue;
                if (score[b] > score[a])
                    a = b;

                if (find(1) == a)
                    ans++;
            }
        }

        cout << ans << "\n";
    }
    return 0;
}
