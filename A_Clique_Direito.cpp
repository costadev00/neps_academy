#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

int calcularInseguranca(const vector<string>& matriz) {
    vector<int> valores; // Armazena os valores onde '#' foi encontrado

    for (const string& dia : matriz) {
        size_t pos = dia.find('#');
        if (pos != string::npos) { // Verifica se '#' foi encontrado na linha
            int valorDia = static_cast<int>(pos) + 1;
            valores.push_back(valorDia);
        }
    }

    if (valores.empty()) {
        return 0; // Não há '#' na matriz, insegurança é 0
    }

    int maximo = *max_element(valores.begin(), valores.end());
    int minimo = *min_element(valores.begin(), valores.end());

    return maximo - minimo;
}

vector<int> calcularInsegurancas(int n, int r, int s, vector<vector<string>>& matrizes) {
    vector<int> insegurancas;

    for (const vector<string>& matriz : matrizes) {
        int inseguranca = calcularInseguranca(matriz);
        insegurancas.push_back(inseguranca);
    }

    return insegurancas;
}

int main() {
    int n, r, s;  // Número de NFPs, número de linhas (r) e número de colunas (s)
    cin >> n >> r >> s;

    vector<vector<string>> matrizes;

    for (int i = 0; i < n; i++) {
        vector<string> matriz(r);

        for (int j = 0; j < r; j++) {
            cin >> matriz[j];  // Lê uma linha da matriz
        }

        matrizes.push_back(matriz);
    }

    vector<int> insegurancas = calcularInsegurancas(n, r, s, matrizes);

    for (int i = 0; i < n; i++) {
        cout << insegurancas[i] << endl; // Imprime a insegurança do NFP i
    }

    return 0;
}
