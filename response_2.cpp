#include <iostream>
#include <vector>
#include <cmath>

// Gera uma lista de números primos até o limite usando o Crivo de Eratóstenes
std::vector<int> gerarPrimosAte(int limite) {
    std::vector<bool> ehPrimo(limite + 1, true);
    ehPrimo[0] = ehPrimo[1] = false;

    for (int i = 2; i <= std::sqrt(limite); ++i) {
        if (ehPrimo[i]) {
            for (int j = i * i; j <= limite; j += i) {
                ehPrimo[j] = false;
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
bool podeSerSomaDeDoisQuadrados(int num) {
    for (int a = 0; a * a <= num; ++a) {
        int bSquared = num - a * a;
        int b = std::sqrt(bSquared);
        if (b * b == bSquared) {
            return true;
        }
    }
    return false;
}

// Encontra primos que podem ser representados como soma de dois quadrados
std::vector<int> encontrarPrimosSomaDeQuadrados(int limite) {
    std::vector<int> primos = gerarPrimosAte(limite);
    std::vector<int> resultado;

    for (int primo : primos) {
        if (podeSerSomaDeDoisQuadrados(primo)) {
            resultado.push_back(primo);
        }
    }
    return resultado;
}

int main() {
    int limite;
    std::cout << "Digite o limite: ";
    std::cin >> limite;

    std::vector<int> primosSomaQuadrados = encontrarPrimosSomaDeQuadrados(limite);

    std::cout << "Números primos que são soma de dois quadrados perfeitos: \n";
    for (int primo : primosSomaQuadrados) {
        std::cout << primo << " ";
    }
    std::cout << std::endl;

    return 0;
}