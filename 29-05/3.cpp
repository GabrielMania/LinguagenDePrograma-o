#include <iostream>
#include <string>

using namespace std;

int main(){

    string marcas[7] = {"Ferrari", "Porsche", "Toyota", "BMW", "Ford", "Honda", "Chevrolet"};

    for(int i=0; i<7; i++){
        cout << marcas[i] << endl; 
    }
    return 0;
}