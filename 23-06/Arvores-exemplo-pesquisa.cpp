#include <iostream>

using namespace std;

namespace Estrutura {
    struct No {
        int valor;
        No* esquerda;
        No* direita;

        No(int v) : valor(v), esquerda(nullptr), direita(nullptr) {}
    };
}

int main() {
    using namespace Estrutura;

    No* raiz = new No(10);
    raiz->esquerda = new No(5);
    raiz->direita = new No(15);

    cout << raiz->valor << " - Valor da raiz" "\n";
    cout << raiz->esquerda->valor << " - Valor da esquerda" << "\n";
    cout << raiz->direita->valor << " - Valor da direita" << "\n";

    delete raiz->esquerda;
    delete raiz->direita;
    delete raiz;

    return 0;
}
