#include <bits/stdc++.h>
using namespace std;

const int MAXN = 100010;

int n, m; // numero de vertices e arestas

vector<tuple<int, int, int>> edges; // grafo com a representacao de lista de arestas
vector<pair<int, int>> vet_p;
// Implementação do DSU
int parent[MAXN], sz[MAXN];

void init_dsu(int n) // Initializa o DSU com n vértices
{
    for (int i = 0; i < n; i++)
    {
        sz[i] = 1;
        parent[i] = i;
    }
}
int find(int value)
{
    if (parent[value] == value)
        return value;
    return parent[value] = find(parent[value]);
}

void merge(int i, int j)
{
    i = find(i);
    j = find(j);

    if (i == j)
        return;

    if (sz[i] >= sz[j])
    {
        parent[j] = i;
        sz[i] += sz[j];
    }
    else
    {
        parent[i] = j;
        sz[j] += sz[i];
    }
}

// Funcao de comparacao, que ordena as arestas de acordo com seu peso(posicao 2 na tupla)
bool compare(tuple<int, int, int> e1, tuple<int, int, int> e2)
{
    if (get<2>(e1) == get<2>(e2))
        return min(get<0>(e1), get<1>(e1)) < min(get<0>(e2), get<1>(e2));

    return get<2>(e1) < get<2>(e2);
}

// Implementacao do algoritmo de Kruskal por Joseph Kruskal para gerar a árvore geradora mínima
int kruskal()
{
    // sort(edges.begin(), edges.end());          // Ordena pelo primeiro elemento
    sort(edges.begin(), edges.end(), compare); // Ordena as arestas por seu peso, usando a funcao sort e compare
    init_dsu(n);

    int mst_cost = 0;

    for (int i = 0; i < (int)edges.size(); i++) // Itera pela arestas
    {
        int u, v, w;
        tie(u, v, w) = edges[i];

        if (find(u) != find(v)) // Checa se u e v estão em componentes diferentes
        {
            merge(u, v);
            vet_p.push_back({u, v});
            mst_cost += w; // Aumenta o custo da nossa MST
        }
    }

    return mst_cost;
}

int main()
{
    int t = 0;
    while (cin >> n >> m)
    {
        if (n == 0)
            break;
        for (int i = 0; i < m; i++)
        {
            int u, v, w;
            // Lê a descrição de uma aresta
            cin >> u >> v >> w;
            edges.push_back({u, v, w});
            edges.push_back({v, u, w});
        }

        // int mst_cost = kruskal();

        kruskal();
        stable_sort(vet_p.begin(), vet_p.end());
        cout << "Teste " << ++t << endl;
        for (auto u : vet_p)
        {
            if (u.first > u.second)
                swap(u.first, u.second);
            cout << u.first << " " << u.second << endl;
        }
        cout << endl;
        vet_p.clear();
        edges.clear();
    }
}


//SOLVE BY THIAGO MOTA
// vector<pair<int,ii>> edges;
// vector<int> parent;

// //{custo, {x,y}}

// void buildUF(const int N){
//     parent.resize(N);
//     for(int i = 0; i < N ; ++i) parent[i] = i;
// }

// int find(int u){
//     if(parent[u] == u) return u;
//     return parent[u] = find(parent[u]); 
// }

// void merge(int u, int v){
//     u = find(u), v = find(v);
//     parent[u] = v;
// }

// bool isSameSet(int u, int v){
//     return find(u) == find(v);
// }

// vector<ii> ans;
// int kruskral(const int N){
//     buildUF(N+1);
//     sort(edges.begin(), edges.end());
//     int mst = 0, cnt = 0;
//     for(auto e : edges){
//         int w = e.first;
//         int u = e.second.first;
//         int v = e.second.second;
//         if(isSameSet(u,v)) continue;
//         mst += w;
//         merge(u,v);
//         ans.push_back({u,v});        
//         if(++cnt == N-1) break;
//     }
//     return mst;
// }

// int main(){
//   fastio();
//   int n, m;
//   int t = 1;
//   while(cin >> n >> m && n){
//     if(t>1) cout << '\n';
//     buildUF(n+1);
//     edges.clear();
//     ans.clear();
//     for(int i = 0; i < m ; ++i){
//       int a, b, c;
//       cin >> a >> b >> c;
//       edges.push_back({c,{a,b}});
//       //edges.push_back({c,{b,a}});
//       //edges.push_back({c,{min(a,b),max(a,b)}});
//       //edges.push_back
//     }

//     kruskral(n+1);
//     cout << "Teste " << t++ << "\n";
//     for(int i = 0; i < (int)ans.size() ; ++i){
//       cout << min(ans[i].first, ans[i].second) << ' ' << max(ans[i].first, ans[i].second) << '\n';
//     }
//   }
//   return 0;
// }