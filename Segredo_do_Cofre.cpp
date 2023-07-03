#include <iostream>
#include <vector>

using namespace std;

void prefixSumSecretCofre() {
    // Passo 1
    int N, M;
    cin >> N >> M;

    // Passo 2
    vector<int> barra(N);
    for (int i = 0; i < N; i++) {
        cin >> barra[i];
    }

    // Passo 3
    vector<int> sequencia(M);
    for (int i = 0; i < M; i++) {
        cin >> sequencia[i];
    }

    // Passo 4
    vector<int> prefixSum(10, 0);

    // Passo 5
    for (int i = 0; i < N; i++) {
        prefixSum[barra[i]] += 1;
    }

    // Passo 6
    for (int i = 1; i < 10; i++) {
        prefixSum[i] += prefixSum[i - 1];
    }

    // Passo 7
    vector<int> resultado(10, 0);
    for (int i = 0; i < M; i++) {
        int pos = sequencia[i];
        resultado[barra[pos - 1]] += 1;
    }

    for (int i = 0; i < 10; i++) {
        cout << resultado[i] << " ";
    }
    cout << endl;
}

int main() {
    prefixSumSecretCofre();

    return 0;
}
