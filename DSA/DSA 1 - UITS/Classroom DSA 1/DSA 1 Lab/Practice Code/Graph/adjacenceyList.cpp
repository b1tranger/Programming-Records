#include <iostream>
using namespace std;

const int MAX_VERTICES = 100; // Maximum number of vertices
int adjList[MAX_VERTICES][MAX_VERTICES]; // Adjacency list using a 2D array
int sizes[MAX_VERTICES]; // Array to store sizes of adjacency lists

void addEdge(int u, int v) {
    adjList[u][sizes[u]++] = v;
    adjList[v][sizes[v]++] = u; // For undirected graph
}

void printAdjList(int vertices) {
    for (int i = 0; i < vertices; i++) {
        cout << i << ": ";
        for (int j = 0; j < sizes[i]; j++) {
            cout << adjList[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int vertices = 5; // Example with 5 vertices
    for (int i = 0; i < vertices; i++) {
        sizes[i] = 0; // Initialize sizes to 0
    }

    addEdge(0, 1);
    addEdge(0, 4);
    addEdge(1, 2);
    addEdge(1, 3);
    addEdge(1, 4);
    addEdge(2, 3);
    addEdge(3, 4);

    printAdjList(vertices);

    return 0;
}
