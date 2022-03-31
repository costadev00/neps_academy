// C++ implementation of the approach
#include <bits/stdc++.h>
using namespace std;

// Function to perform DFS on the tree
void dfs(list<int> t[], int node, int parent)
{
    int flag = 1;

    // Iterating the children of current node
    for (auto ir : t[node])
    {

        // There is at least a child
        // of the current node
        if (ir != parent)
        {
            flag = 0;
            dfs(t, ir, node);
        }
    }

    // Current node is connected to only
    // its parent i.e. it is a leaf node
    if (flag == 1)
        cout << node << " ";
}

// Driver code
int main()
{
    // Adjacency list
    list<int> t[1005];
    int n;
    cin >> n;
    // List of all edges
    pair<int, int> edges[n];
    for (int i = 0; i < n - 1; i++)
    {
        int a,b;
        cin >>a>>b;
        edges
    }

    // Count of edges
    int cnt = sizeof(edges) / sizeof(edges[0]);

    // Number of nodes
    int node = cnt + 1;

    // Create the tree
    for (int i = 0; i < cnt; i++)
    {
        t[edges[i].first].push_back(edges[i].second);
        t[edges[i].second].push_back(edges[i].first);
    }

    // Function call
    dfs(t, 1, 0);

    return 0;
}
