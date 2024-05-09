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
    map<char, int> alfabeto;
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
    // cout << s << endl;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a' && s[i]<='z'){
            alfabeto[s[i]]++;
        }
        else if(s[i]>='A' && s[i]<='Z'){
            alfabeto[s[i]+32]++;
        }
    }
    // debug(alfabeto.size());
    if(alfabeto.size()==23){
        cout<<'S'<<endl;
    }
    else{
        cout<<'N'<<endl;
    }
    return 0;
}