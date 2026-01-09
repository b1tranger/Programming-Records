#include <iostream>
using namespace std;

// Node structure for linked list
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};

// Graph class using adjacency list
class Graph {
private:
    int V;            // Number of vertices
    Node** adjList;   // Array of linked lists

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjList = new Node*[V];   // Create an array of pointers to Node

        // Initialize all lists to NULL
        for (int i = 0; i < V; i++) {
            adjList[i] = nullptr;
        }
    }

    // Add edge from src to dest (directed graph)
    void addEdge(int src, int dest) {
        // Add node to src list
        Node* newNode = new Node(dest);
        newNode->next = adjList[src];
        adjList[src] = newNode;

        // If undirected graph, also add the reverse edge
        // Node* reverseNode = new Node(src);
        // reverseNode->next = adjList[dest];
        // adjList[dest] = reverseNode;
    }

    // Display the adjacency list
    void display() {
        for (int i = 0; i < V; i++) {
            cout << "Vertex " << i << ": ";
            Node* temp = adjList[i];
            while (temp != nullptr) {
                cout << "-> " << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    // Destructor to free memory
    ~Graph() {
        for (int i = 0; i < V; i++) {
            Node* current = adjList[i];
            while (current != nullptr) {
                Node* temp = current;
                current = current->next;
                delete temp;
            }
        }
        delete[] adjList;
    }
};

// Driver code
int main() {
    int vertices = 5;

    Graph g(vertices);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Adjacency List of Graph:" << endl;
    g.display();

    return 0;
}

