#include <bits/stdc++.h>

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL)

#define endl "\n"

using namespace std;

int main()
{
    fastio;
    double n1, n2, res = 0;
    scanf("%lf %lf", &n1, &n2);
    res = pow(n1, n2);
    printf("%.4lf\n", res);
    return 0;
}