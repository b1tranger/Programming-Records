#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* head = NULL;

// Insert at the beginning
void insertAtBeginning(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = head;
    head = newNode;
}

// Display the list
void display() {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

// Delete node at a specific position
void deleteAtPosition(int position) {
    if (head == NULL) {
        cout << "List is empty!" << endl;
        return;
    }

    if (position == 1) {
        // Position 1 means delete the first node
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    // Go up to position - 2 because temp should point to the node before the one to delete
    for (int i = 1; i < position - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    Node* nodeToDelete = temp->next;
    temp->next = temp->next->next;
    delete nodeToDelete;
}

int main() {
    insertAtBeginning(50);
    insertAtBeginning(40);
    insertAtBeginning(30);
    insertAtBeginning(20);
    insertAtBeginning(10); // List: 10 -> 20 -> 30 -> 40 -> 50

    cout << "Initial List: ";
    display();

    deleteAtPosition(3);  // Deletes node at position 3 (which is 30)

    cout << "After deleting position 3: ";
    display(); // 10 -> 20 -> 40 -> 50

    deleteAtPosition(1);  // Deletes node at position 1 (which is 10)

    cout << "After deleting position 1: ";
    display(); // 20 -> 40 -> 50

    deleteAtPosition(10); // Invalid position, should show error message

    return 0;
}
