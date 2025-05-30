#include <iostream>
using namespace std;

int main() {
    int vertices = 5;
    int adjMatrix[5][5] = {0}; // Initialize all elements to 0

    // Adding edges
    adjMatrix[0][1] = 1;
    adjMatrix[1][0] = 1; // For undirected graph

    adjMatrix[0][4] = 1;
    adjMatrix[4][0] = 1;

    adjMatrix[1][2] = 1;
    adjMatrix[2][1] = 1;

    adjMatrix[1][3] = 1;
    adjMatrix[3][1] = 1;

    adjMatrix[1][4] = 1;
    adjMatrix[4][1] = 1;

    adjMatrix[2][3] = 1;
    adjMatrix[3][2] = 1;

    adjMatrix[3][4] = 1;
    adjMatrix[4][3] = 1;

    // Displaying the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < vertices; i++) {
        for (int j = 0; j < vertices; j++) {
            cout << adjMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
