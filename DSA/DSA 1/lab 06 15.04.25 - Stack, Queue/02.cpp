#include <bits/stdc++.h>
using namespace std;
#define Size 100


class Queue
{
    int arr[Size];
    int front, back;

public:
    Queue()
    {
        front=back=-1;
    }

    void enqueue(int val)
    {
        if(back==Size-1)
        {
            cout<<"Queue is full"<<endl;
            return;
        }
        if(front==-1)
        {
            front++;
        }
        back++;
        arr[back]=val;
    }

    void dequeue()
    {

        cout<<"Front element is "<<arr[front]<<endl;
        front++;
        if(front>back)
        {
            cout<<"queue is empty"<<endl;
            front=back=-1;
        }
    }

    void peek()
    {
        if(front==-1)
        {
            cout<<"Queue is empty"<<endl;
            return;
        }
        cout<<"Front element is "<<arr[front]<<endl;
    }

    bool isEmpty()
    {
//        if(front==-1)
//        {
//            return true;
//        }
//        else
//        {
//            return false;
//        }
        return (front==-1); //replaces if block


    }

    void display()
    {
        cout<<"Displaying elements:\n> ";
        for(int i = front; i<=back; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }



};

int main()
{
    Queue q;
    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

//q.peek();
    q.display();



    return 0;
}
