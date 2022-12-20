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
    int days_max = 35 * 365;
    int t;
    cin >> t;
    t *= 2;
    // how many minutes have a day
    long long int total_minutes = days_max * t;

    // convert the total_minutes do year, day, hour and minutes
    long long int year = total_minutes / (365 * 24 * 60);
    total_minutes %= (365 * 24 * 60);
    long long int day = total_minutes / (24 * 60);
    total_minutes %= (24 * 60);
    long long int hour = total_minutes / 60;
    total_minutes %= 60;
    long long int minutes = total_minutes;
    cout << year << " ano(s), ";
    cout << day << " dia(s), ";
    cout << hour << " hora(s) e ";
    cout << minutes << " minuto(s)" << endl;
    return 0;
}