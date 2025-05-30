#include <iostream>

using namespace std;

#define MAX 100
int adjMat[MAX][MAX];
bool vis[MAX];



void bfs(int start, int n) {
    int queue[MAX], front = 0, rear = 0;

    vis[start] = true;
    queue[rear++] = start;

    while (front < rear) {
        int current = queue[front++];
        cout << current << " ";

        for (int i = 0; i < n; i++) {
            if (adjMat[current][i] == 1 && !vis[i]) {
                vis[i] = true;
                queue[rear++] = i;
            }
        }
    }
}

int main() {

    int n, e;
    cin >> n >> e;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            adjMat[i][j] = 0;
        }
        vis[i] = false;
    }



    while (e--) {
        int u, v;
        cin >> u >> v;
        adjMat[u][v] = 1;
        adjMat[v][u] = 1;

    }

    int src;
    cin >> src;

    cout << "BFS Traversal starting from vertex 0: ";
    
    bfs(src, n);

    return 0;
}