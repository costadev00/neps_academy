#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge {
    int u, v, cost;
    bool isRailway;
};

bool compareEdges(const Edge& e1, const Edge& e2) {
    if (e1.isRailway != e2.isRailway) {
        return e1.isRailway;
    } else if (e1.cost != e2.cost) {
        return e1.cost < e2.cost;
    } else {
        return false;  // Apenas para garantir uma ordenação estável
    }
}

class UnionFind {
public:
    explicit UnionFind(int n) : parent(n), rank(n, 0) {
        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        int rootX = find(x);
        int rootY = find(y);

        if (rootX == rootY) {
            return false;
        }

        if (rank[rootX] < rank[rootY]) {
            parent[rootX] = rootY;
        } else if (rank[rootX] > rank[rootY]) {
            parent[rootY] = rootX;
        } else {
            parent[rootY] = rootX;
            rank[rootX]++;
        }

        return true;
    }

private:
    vector<int> parent;
    vector<int> rank;
};

int findMinCost(vector<Edge>& edges, int n) {
    sort(edges.begin(), edges.end(), compareEdges);

    UnionFind uf(n);
    int minCost = 0;
    int numRodovias = 0;

    for (const Edge& edge : edges) {
        if (uf.unite(edge.u, edge.v)) {
            minCost += edge.cost;
            if (!edge.isRailway) {
                numRodovias++;
            }
        }
    }

    return (numRodovias == n - 1) ? minCost : -1;
}

int main() {
    int n, f, r;
    cin >> n >> f >> r;

    vector<Edge> edges;

    for (int i = 0; i < f; i++) {
        int a, b, c;
        cin >> a >> b >> c;
        edges.push_back({a, b, c, true});
    }

    for (int i = 0; i < r; i++) {
        int x, y, z;
        cin >>x >> y >> z;
        edges.push_back({x, y, z, false});
    }

    int minCost = findMinCost(edges, n);

    cout << minCost << endl;

    return 0;
}
