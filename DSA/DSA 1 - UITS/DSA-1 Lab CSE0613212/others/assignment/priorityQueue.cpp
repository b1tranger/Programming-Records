#include <iostream>
using namespace std;

const int MAX = 100;

struct Item {
    int value;
    int priority;
};

class PriorityQueue {
private:
    Item arr[MAX];
    int size;

public:
    PriorityQueue() {
        size = 0;
    }

    // Enqueue: Add an element based on its priority
    void enqueue(int value, int priority) {
        if (size == MAX) {
            cout << "Queue Overflow\n";
            return;
        }

        int i = size - 1;
        // Find the correct position to insert based on priority
        while(i>=0 && arr[i].priority<priority)
       {
            arr[i + 1] = arr[i]; // Shift lower-priority items to the right
            i--;
        }

        // Insert the new item
        arr[i + 1].value = value;
        arr[i + 1].priority = priority;
        size++;
    }

    // Dequeue: Remove the element with the highest priority
    void dequeue() {
        if (size == 0) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Dequeued element: " << arr[0].value << " (Priority: " << arr[0].priority << ")\n";

        // Shift all elements left
        for (int i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
    }

    // Display the queue contents
    void display() {
        if (size == 0) {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Priority Queue:\n";
        for (int i = 0; i < size; i++) {
            cout << "Value: " << arr[i].value << ", Priority: " << arr[i].priority << endl;
        }
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 2);
    pq.enqueue(20, 4);
    pq.enqueue(30, 1);
    pq.enqueue(40, 3);

    pq.display();
    // Expected order: 20 (4), 40 (3), 10 (2), 30 (1)

    pq.dequeue(); // Should remove 20
    pq.display();

    pq.dequeue(); // Should remove 40
    pq.display();

    return 0;
}