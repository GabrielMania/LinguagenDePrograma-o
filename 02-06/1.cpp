#include <iostream>

using namespace std;

int main(){

    int A[3] = {2, 4, 6};
    int B[3] = {1, 3, 5};
    int C[3] = {4, 7, 10};

    int out[3] = {0,0,0};

    for (int i=0; i < 3; i++ ){
        out[i] += A[i] + B[i] + C[i];
    }

    cout << "Out: " << out[0] << ", " << out[1] << ", " << out[2] << ", " << endl;

    return 0;
}