#include <iostream>
#include <vector>
#include <cmath>

// Gera uma lista de números primos até um limite usando o Crivo de Eratóstenes
std::vector<int> gerarPrimos(int limite) {
    std::vector<bool> ehPrimo(limite + 1, true);
    ehPrimo[0] = ehPrimo[1] = false; // 0 e 1 não são primos

    for (int p = 2; p * p <= limite; ++p) {
        if (ehPrimo[p]) {
            for (int i = p * p; i <= limite; i += p) {
                ehPrimo[i] = false;
            }
        }
    }

    std::vector<int> primos;
    for (int i = 2; i <= limite; ++i) {
        if (ehPrimo[i]) {
            primos.push_back(i);
        }
    }
    return primos;
}

// Verifica se um número pode ser representado como soma de dois quadrados perfeitos
bool ehSomaDeDoisQuadrados(int num) {
    for (int a = 0; a * a <= num; ++a) {
        int bSquared = num - a * a;
        int b = static_cast<int>(sqrt(bSquared));
        if (b * b == bSquared) {
            return true;
        }
    }
    return false;
}

// Encontra números primos que podem ser representados como soma de dois quadrados perfeitos
std::vector<int> encontrarPrimosSomaDeQuadrados(int limite) {
    std::vector<int> primos = gerarPrimos(limite);
    std::vector<int> resultado;

    for (int primo : primos) {
        if (ehSomaDeDoisQuadrados(primo)) {
            resultado.push_back(primo);
        }
    }

    return resultado;
}

int main() {
    int limite;
    std::cout << "Digite o limite: ";
    std::cin >> limite;

    std::vector<int> primosSomaDeQuadrados = encontrarPrimosSomaDeQuadrados(limite);

    std::cout << "Números primos que são soma de dois quadrados perfeitos: \n";
    for (int primo : primosSomaDeQuadrados) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    return 0;
}