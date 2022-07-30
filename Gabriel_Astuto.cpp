#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n;
    cin >> n;
    cin.ignore();
    for(int i=n;i<s.size();i++){
        cout<<s[i];
    }
    return 0;
}
