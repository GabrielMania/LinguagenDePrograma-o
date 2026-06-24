#include <iostream>
using namespace std;
struct Node {
    int dado;
    Node* prox;
};
int main() {
    Node* n1 = new Node{10, nullptr};
    Node* n2 = new Node{20, nullptr};
    Node* n3 = new Node{30, nullptr};
  
    n1->prox = n2;
    n2->prox = n3;
    Node* head = n1;
  
    // Percorrer lista
    Node* atual = head;
    while (atual != nullptr) {
      cout << atual->dado << " ";
      atual = atual->prox;
    }
    return 0;
}