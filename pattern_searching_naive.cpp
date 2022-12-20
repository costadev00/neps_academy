// C++ program for Naive Pattern
// Searching algorithm
#include <bits/stdc++.h>
using namespace std;

void search(string pat, string txt)
{
    int n = txt.length();
    int m = pat.length();
    for (int i = 0; i < n - m; i++)
    {
        int j;
        for (j = 0; j < m; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == m)
            cout << "Pattern found! Starting on index " << i << " ending on index " << i+m << endl;
    }
}

// Driver Code
int main()
{
    string txt = "AABAACAADAABAAABAA";
    string pat = "AABA";
    search(pat, txt);
    return 0;
}

// This code is contributed
// by Akanksha Rai
