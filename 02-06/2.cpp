#include <iostream>

using namespace std;

int main(){

    int A[3] = {2, 4, 6};
    int B[3] = {1, 7, 5};
    int D[3] = {0,0,0};

    for (int i=0; i < 3; i++ ){
        D[i] += A[i] - B[i];
    }

    cout << "D_out: " << D[0] << ", " << D[1] << ", " << D[2] << ", " << endl;

    return 0;
}