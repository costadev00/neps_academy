#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
    int n, m, H;  // Input labyrinth size and height
    cin >> n >> m >> H;

    // Validate input for n:
    if (n <= 0) {
        cout << "Invalid input for number of platforms: " << n << endl;
        return 0;
    }

    vector<vector<int>> graph(n);  // Adjacency list for labyrinth connections

    // Validate input for connections and handle potential "out-of-bounds" issue:
    for (int i = 0; i < m; i++) {
        int u, v;  // Read connections
        cin >> u >> v;

        if (u <= 0 || u > n || v <= 0 || v > n) {
            cout << "Invalid input for connections: " << u << " " << v << endl;
            return 0;  // Or handle the error appropriately
        }

        graph[u - 1].push_back(v - 1);
        graph[v - 1].push_back(u - 1);  // Undirected connection
    }

    vector<int> levels(n);  // Store platform levels
    for (int i = 0; i < n; i++) {
        cin >> levels[i];
    }

    int start, end;  // Input starting and ending platforms
    cin >> start >> end;

    // Validate input for start and end:
    if (start <= 0 || start > n || end <= 0 || end > n) {
        cout << "Invalid input for starting or ending platform: " << start << " " << end << endl;
        return 0;
    }

    start--;  // Decrement for 0-based indexing
    end--;

    // Check if starting and ending platforms have the same level
    if (levels[start] != levels[end]) {
        cout << "NO\n";
        return 0;
    }

    // Perform BFS traversal to find the path from start to end
    vector<bool> visited(n, false);
    queue<int> q;
    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int cur = q.front();
        q.pop();

        if (cur == end) {
            cout << "YES\n";
            return 0;
        }

        for (int neighbor : graph[cur]) {
            if (!visited[neighbor] && levels[cur] == levels[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }

    cout << "NO\n";
    return 0;
}
