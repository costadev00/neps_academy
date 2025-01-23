#include <iostream>
#include <vector>
#include <stack>


using namespace std;

class Grafo {
private:
    int V; // Número de vértices
    vector<vector<int>> adj; // Lista de adjacência

    // Função auxiliar recursiva para o DFS
    bool DFSUtil(int v, int destino, vector<bool>& visitado) {
        visitado[v] = true;
        if (v == destino) return true; // Se encontrou o destino, retorna verdadeiro

        for (int vizinho : adj[v]) {
            if (!visitado[vizinho]) {
                if (DFSUtil(vizinho, destino, visitado)) {
                    return true;
                }
            }
        }
        return false; // Não encontrou caminho
    }
    bool DFSUtilIterativo(int v, int destino, vector<bool>& visitado) {
    stack<int> pilha;
    pilha.push(v);

    while (!pilha.empty()) {
        int vertice = pilha.top();
        pilha.pop();

        if (visitado[vertice]) continue; // Se já visitado, ignore

        visitado[vertice] = true;
        if (vertice == destino) return true; // Se encontrou o destino, retorna verdadeiro

        for (int vizinho : adj[vertice]) {
            if (!visitado[vizinho]) {
                pilha.push(vizinho);
            }
        }
    }
    return false; // Não encontrou caminho
}

public:
    Grafo(int vertices) : V(vertices) {
        adj.resize(vertices);
    }

    void adicionarAresta(int v, int w) {
        adj[v].push_back(w); // Adiciona aresta direcionada de v para w
    }

    bool existeCaminho(int origem, int destino) {
        vector<bool> visitado(V, false); // Vetor de vértices visitados
        return DFSUtilIterativo(origem, destino, visitado);
    }
};

int main() {
    Grafo g(6);
    g.adicionarAresta(0, 1);
    g.adicionarAresta(0, 2);
    g.adicionarAresta(1, 3);
    g.adicionarAresta(2, 4);
    g.adicionarAresta(3, 5);

    int origem = 0, destino = 5;

    if (g.existeCaminho(origem, destino)) {
        cout << "Existe um caminho entre " << origem << " e " << destino << endl;
    } else {
        cout << "Não existe um caminho entre " << origem << " e " << destino << endl;
    }

    return 0;
}