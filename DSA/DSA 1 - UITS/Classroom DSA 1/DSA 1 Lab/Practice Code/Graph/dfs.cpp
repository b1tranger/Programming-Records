#include <iostream>
using namespace std;

const int MAX = 100; // Maximum number of vertices
bool visited[MAX];
int graph[MAX][MAX];
int vertices;

void dfs(int node) {
    cout << node << " ";
    visited[node] = true;

    for (int i = 0; i < vertices; i++) {
        if (graph[node][i] == 1 && !visited[i]) {
            dfs(i);
        }
    }
}

int main() {
    int edges;
    cout << "Enter the number of vertices: ";
    cin >> vertices;
    cout << "Enter the number of edges: ";
    cin >> edges;

    // Initialize graph and visited array
    for (int i = 0; i < vertices; i++) {
        visited[i] = false;
        for (int j = 0; j < vertices; j++) {
            graph[i][j] = 0;
        }
    }

    cout << "Enter the edges (u v):" << endl;
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        graph[u][v] = 1;
        graph[v][u] = 1; // For undirected graph
    }

    cout << "DFS Traversal starting from node 0:" << endl;
    dfs(0);

    return 0;
}