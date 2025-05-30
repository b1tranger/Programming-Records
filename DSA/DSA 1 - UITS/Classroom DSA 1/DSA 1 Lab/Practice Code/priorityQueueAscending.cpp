#include <iostream>
using namespace std;

#define MAX 100

class PriorityQueue
{
private:
    int arr[MAX];
    int size;

public:
    PriorityQueue()
    {
        size = 0;
    }

    // Insert while maintaining ascending order
    void enqueue(int val) // O(n)
    {
        if (size == MAX)
        {
            cout << "Queue Overflow\n";
            return;
        }

        int i;
        for (i = size - 1; i >= 0 && arr[i] > val; i--)
        {
            arr[i + 1] = arr[i]; // shift elements right
        }

        arr[i + 1] = val; // insert value in correct place
        size++;
    }

    // Remove the element with the highest priority (smallest value)
    void dequeue() // O(n)
    {
        if (isEmpty())
        {
            cout << "Queue Underflow\n";
            return;
        }

        cout << "Removed: " << arr[0] << endl;

        for (int i = 1; i < size; i++)
        {
            arr[i - 1] = arr[i]; // shift left
        }

        size--;
    }

    // Check if queue is empty
    bool isEmpty() // O(1)
    {
        return size == 0;
    }

    // Display queue elements
    void display() // O(n)
    {
        if (isEmpty())
        {
            cout << "Queue is empty\n";
            return;
        }

        cout << "Priority Queue (Ascending Order): ";
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    PriorityQueue pq;

    pq.enqueue(30);
    pq.enqueue(10);
    pq.enqueue(20);

    pq.display();

    pq.dequeue();
    pq.display();

    return 0;
}
