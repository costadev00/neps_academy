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
    string s;
    read(s);
    cin.ignore();
    // remove spaces and make all letters lowercase
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == ' ')
        {
            s.erase(i, 1);
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            s[i] += 32;
        }
    }
    int happy_emojis = 0;
    int sad_emojis = 0;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        if (s[i] == ':')
        {
            if (s[i + 1] == '-')
            {
                if (s[i + 2] == ')')
                {
                    happy_emojis++;
                }
                else if (s[i + 2] == '(')
                {
                    sad_emojis++;
                }
            }
        }
    }
    if (happy_emojis == 0 && sad_emojis == 0)
    {
        cout << "none" << endl;
        return 0;
    }
    if (happy_emojis > sad_emojis)
    {
        cout << "happy" << endl;
        return 0;
    }
    if (happy_emojis < sad_emojis)
    {
        cout << "sad" << endl;
        return 0;
    }
    if (happy_emojis == sad_emojis)
    {
        cout << "unsure" << endl;
        return 0;
    }
    return 0;
}