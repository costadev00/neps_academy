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
    int a, b, x, conta = 0, contb = 0;
    set<int> sa, sb;
    cin >> a >> b;
    while (a--)
    {
        cin >> x;
        sa.insert(x);
    }
    while (b--)
    {
        cin >> x;
        sb.insert(x);
    }

    auto it = sa.begin();

    for (it = sa.begin(); it != sa.end(); it++)
    {
        if (!sb.count(*it))
            conta++;
    }
    for (it = sb.begin(); it != sb.end(); it++)
    {
        if (!sa.count(*it))
            contb++;
    }
    cout << min(conta, contb) << endl;
    return 0;
}

// int main()
// {
//     int a, b;
//     while (scanf("%d %d", &a, &b) && (a || b))
//     {
//         int c = 0, d = 0;
//         set<int> A, B;

//         set<int>::iterator it;
//         for (it = A.begin(); it != A.end(); it++)
//             if (!B.count(*it))
//                 c++;
//         for (it = B.begin(); it != B.end(); it++)
//             if (!A.count(*it))
//                 d++;
//         printf("%d\n", min(c, d));
//     }
//     return 0;
// }