#include <iostream>

using namespace std;

int main(){
                   //"488 GTB", "SF90 Stradale", "911 Carrera", "Taycan", "Corolla", "Hilux", "320i", "M5", "Mustang", "Ranger", "Civic", "Fit", "Onix", "Cruze"
    int preço[14] = {3180000, 6200000, 835000, 972000, 135000, 250000, 120000, 550000, 540000, 260000, 115000, 80000, 88000, 120000};
    // tabom você venceu, esse deu bem mais trabalho 🫠
    for(int i = 0; i<14; i+=2){
        cout << "| " << preço[i] << " | " << preço[i+1] << " |" << endl; 
    }
    return 0;
}