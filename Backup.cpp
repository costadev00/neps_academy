// C++ program to find minimum
// number of denominations
#include <bits/stdc++.h>
using namespace std;

// All denominations of Indian Currency
int space[] = {1, 2, 4, 8, 16, 32, 64,
               128, 256, 512, 1024, 2048, 4096, 8192};
int n = sizeof(space) / sizeof(space[0]);

void findMin(int V)
{

    // Initialize result
    vector<int> ans;
    int cont = 0;
    // Traverse through all denomination
    for (int i = n - 1; i >= 0; i--)
    {
        // Find denominations
        while (V >= space[i])
        {
            V -= space[i];
            cont++;
        }
    }

    // Print result
    cout << cont << endl;
}

// Driver program
int main()
{
    int n;
    cin >> n;
    findMin(n);
    return 0;
}
