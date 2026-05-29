#include <iostream>
#include <string>

using namespace std;

int main(){

    string modelos[14] = {"488 GTB", "SF90 Stradale", "911 Carrera", "Taycan", "Corolla", "Hilux", "320i", "M5", "Mustang", "Ranger", "Civic", "Fit", "Onix", "Cruze"};
    // esse deu trabalho. cada linha é uma fabricante e cada coluna é um modelo
    for(int i = 0; i<14; i+=2){
        cout << "| " << modelos[i] << " | " << modelos[i+1] << " |" << endl; 
    }
    return 0;
}