#include <iostream>
#include <vector>

using namespace std;

int main() {
    int V = 5;

    vector<vector<int>> grafo(V);

    grafo[0].push_back(1);
    grafo[1].push_back(0);

    grafo[0].push_back(2);
    grafo[2].push_back(0);

    for (int i = 0; i < V; i++) {
        cout << "| " << i << " |" << " -> ";
        for (int vizinho : grafo[i]) {
            cout  << "| " << vizinho << " | ";
        }
        cout << "\n";
    }

    return 0;
}
