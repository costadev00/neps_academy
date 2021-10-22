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

vector<string> split(const string &s, char delimiter)
{
    vector<string> tokens;
    string token;
    istringstream tokenStream(s);
    while (getline(tokenStream, token, delimiter))
    {
        tokens.push_back(token);
    }
    return tokens;
}

int main()
{
    fastio;
    string s;
    read(s);
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = tolower(s[i]);
    }
    vector<string> vet;
    vet = split(s, ' ');
    int j = 0;

    s[j] = toupper(s[j]);

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ')
        {
            s[i + 1] = toupper(s[i + 1]);
        }
    }
    cout << s << endl;

    return 0;
}