#include <iostream>
using namespace std;

// Define a node structure
struct Node {
    int data;       // to store the value
    Node* next;     // pointer to the next node
};

// Head pointer to the first node
Node* head = NULL;

// Function to create a linked list
void createList() {
    // Create 3 new nodes
    Node* first = new Node();
    Node* second = new Node();
    Node* third = new Node();

    // Assign data to the nodes
    first->data = 10;
    second->data = 20;
    third->data = 30;

    // Link the nodes
    first->next = second;
    second->next = third;
    third->next = NULL;  // Last node points to NULL

    // Head now points to the first node
    head = first;
}

// Function to display the linked list
void displayList() {
    Node* temp = head;
    cout << "Linked List: ";

    // Traverse the list until the end
    while (temp != NULL) {
        cout << temp->data << "->";  // Print data
        temp = temp->next;          // Move to next node
    }

   cout << "NULL" << endl;
}

// Main function
int main() {
    createList();     // Create the linked list
    displayList();    // Show the linked list

    return 0;
}

