#include <bits/stdc++.h>

using namespace std;

int t;
string line; 

int main(){
    ios::sync_with_stdio(false); cin.tie(0);
    cin >> t;

    while(t--){
        cin >> line;

        stack < char > st;
        bool ok = true;
        for(char c : line){
            if(c == '{' || c == '[' || c == '('){
                st.push(c);
            }else{
                if(st.size() > 0 && st.top() == '{' && c == '}'){
                    st.pop();
                }else if(st.size() > 0 && st.top() == '[' && c == ']'){
                    st.pop();
                }else if(st.size() > 0 && st.top() == '(' && c == ')'){
                    st.pop();
                }else{
                    ok = false;
                    break;
                }
            }
        }
        if(st.size() > 0) ok = false;

        cout << (ok ? "S\n":"N\n");
    }

    return 0;
}

