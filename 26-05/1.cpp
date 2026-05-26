#include <iostream>

using namespace std;

int main(){
    //variavel inteira dinamicamente alocada
    int *a = new int; //declaração
    *a = 100;         //atribuição

    delete a;         //Liberação

    return 0;
}