#include <iostream>
#include <stdexcept>

class Pilha {
private:
    int* dados;
    int capacidade;
    int topo;

public:
    // Construtor
    Pilha(int cap) : capacidade(cap), topo(-1) {
        if (capacidade <= 0) throw std::invalid_argument("Capacidade deve ser maior que zero.");
        dados = new int[capacidade];
    }

    // Destrutor
    ~Pilha() {
        delete[] dados;
    }

    // Adiciona um elemento na pilha
    void push(int valor) {
        if (estaCheia()) throw std::overflow_error("Pilha cheia.");
        dados[++topo] = valor;
    }

    // Remove e retorna o elemento no topo
    int pop() {
        if (estaVazia()) throw std::underflow_error("Pilha vazia.");
        return dados[topo--];
    }

    // Retorna o elemento no topo sem removê-lo
    int topElement() const {
        if (estaVazia()) throw std::underflow_error("Pilha vazia.");
        return dados[topo];
    }

    // Verifica se a pilha está vazia
    bool estaVazia() const {
        return topo == -1;
    }

    // Verifica se a pilha está cheia
    bool estaCheia() const {
        return topo == capacidade - 1;
    }

    // Retorna o tamanho atual da pilha
    int tamanho() const {
        return topo + 1;
    }
};

// int main() {
//     Pilha pilha(5);

//     // Teste básico
//     pilha.push(10);
//     pilha.push(20);
//     std::cout << "Topo: " << pilha.topElement() << std::endl; // Deve imprimir 20
//     pilha.pop();
//     std::cout << "Topo: " << pilha.topElement() << std::endl; // Deve imprimir 10

//     return 0;
// }