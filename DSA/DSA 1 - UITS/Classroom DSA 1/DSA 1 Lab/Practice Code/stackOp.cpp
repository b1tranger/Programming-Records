#include <iostream>
#define Size 100
using namespace std;

class Stack
{
    int arr[Size];
    int top;

public:
    Stack()
    {
        top = -1;
    }
    void push(int val)
    {
        if (top == Size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = val;
            cout << val << " pushed into stack" << endl;
        }
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "Stack Underflow" << endl;
            return;
        }
        else
        {
            cout << arr[top] << " popped from stack" << endl;
            top--;
        }
    }

    void peek()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << arr[top] << " is the top element" << endl;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return true;
        }
        else
        {
            cout << "Stack is not empty" << endl;
            return false;
        }
    }
    void display()
    {
        if (top == -1)
        {
            cout << "Stack is empty" << endl;
            return;
        }
        else
        {
            cout << "Stack elements are: ";
            for (int i = top; i >= 0; i--)
            {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    return 0;
}