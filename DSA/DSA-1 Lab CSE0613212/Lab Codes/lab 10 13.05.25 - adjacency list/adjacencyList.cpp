#include <iostream>
#include <algorithm>
using namespace std;

class ajd
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = nullptr;
    }
};

//graph class using adjacency list
class Graph
{
private:
    int V;
    node** adjList; //array of linked list
    // works like 2D array
public:
    Graph(int vertices)
    {
        V = vertices; // number of nodes
        adjList = new node*[V];

        for(int i=0; i<V; i++)
        {
            adjList=nullptr; // initialize all pointers to NULL
        }
    }
    void addEdge(int src, int dest)
    {
        node* newNode = new node(dest);
        newNode->next = adjList[src];
        adjList[src] = newNode;


        //FOR UNDIREDTED
        // node* reverseNode = new node(src);
        // ...
    }
    void display()
    {
        for(int i = 0; i<V; i++)
        {
            printf("Vertex %d: ",i);
//    cout << "Vertex" << i << ":";
            node* temp = adjList[i];
            while()


            }

    }


};

int main()
{




    return 0;
}
