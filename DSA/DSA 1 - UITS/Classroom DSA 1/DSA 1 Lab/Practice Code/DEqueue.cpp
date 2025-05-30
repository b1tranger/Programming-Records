#include <iostream>
// #include<bits/stdc++.h>
using namespace std;

#define MAX 10 // Maximum size of the deque

class Deque
{
private:
    int arr[MAX]; // Array to store deque elements
    int front;    // Front pointer
    int rear;     // Rear pointer
    int size;     // Current size of the deque

public:
    // Constructor to initialize the deque
    Deque()
    {
        front = -1;
        rear = -1;
        size = 0;
    }

    // Check if deque is full
    bool isFull()
    {
        return (size == MAX);
    }

    // Check if deque is empty
    bool isEmpty()
    {
        return (size == 0);
    }

    // Insert element at the front
    void insertFront(int key)
    {
        if (isFull())
        {
            cout << "Overflow: Dequeue is full\n";
            return;
        }

        if (front == -1)
        { // If deque is empty
            front = 0;
            rear = 0;
        }
        else if (front == 0)
        {                    // If front is at index 0, wrap around
            front = MAX - 1; // In a deque, when you're inserting at the front, you want to move the front pointer backward.
        }
        else
        {
            front--; // Move front pointer backwards
        }

        arr[front] = key; // Insert the element at front
        size++;
    }

    // Insert element at the rear
    void insertRear(int key)
    {
        if (isFull())
        {
            cout << "Overflow: Deque is full\n";
            return;
        }

        if (front == -1)
        { // If deque is empty
            front = 0;
            rear = 0;
        }
        else if (rear == MAX - 1)
        { // If rear is at the end, wrap around
            rear = 0;
        }
        else
        {
            rear++; // Move rear pointer forward
        }

        arr[rear] = key; // Insert the element at rear
        size++;
    }

    // Delete element from the front
    void deleteFront()
    {
        if (isEmpty())
        {
            cout << "Underflow: Deque is empty\n";
            return;
        }

        if (front == rear)
        { // Only one element left
            front = -1;
            rear = -1;
        }
        else if (front == MAX - 1)
        { // If front is at the end, wrap around
            front = 0;
        }
        else
        {
            front++; // Move front pointer forward
        }

        size--;
    }

    // Delete element from the rear
    void deleteRear()
    {
        if (isEmpty())
        {
            cout << "Underflow: Deque is empty\n";
            return;
        }

        if (front == rear)
        { // Only one element left
            front = -1;
            rear = -1;
        }
        else if (rear == 0)
        { // If rear is at the beginning, wrap around
            rear = MAX - 1;
        }
        else
        {
            rear--; // Move rear pointer backward
        }

        size--;
    }

    // Get the front element
    int getFront()
    {
        if (isEmpty())
        {
            cout << "Underflow: Deque is empty\n";
            return -1;
        }
        return arr[front];
    }

    // Get the rear element
    int getRear()
    {
        if (isEmpty())
        {
            cout << "Underflow: Deque is empty\n";
            return -1;
        }
        return arr[rear];
    }

    // Display elements of the deque
    void display()
    {
        if (isEmpty())
        {
            cout << "Deque is empty\n";
            return;
        }

        int i = front;
        cout << "Deque elements: ";
        while (i != rear)
        {
            cout << arr[i] << " ";
            i = (i + 1) % MAX;
        }
        cout << arr[rear] << endl;
    }
};

int main()
{
    Deque dq;

    // Insert elements at the rear
    dq.insertRear(10);
    dq.insertRear(20);
    dq.insertRear(30);

    // Insert element at the front
    dq.insertFront(5);

    // Display elements
    dq.display();

    // Get the front and rear elements
    cout << "Front element: " << dq.getFront() << endl;
    cout << "Rear element: " << dq.getRear() << endl;

    // Delete element from the front
    dq.deleteFront();
    dq.display();

    // Delete element from the rear
    dq.deleteRear();
    dq.display();

    return 0;
}
