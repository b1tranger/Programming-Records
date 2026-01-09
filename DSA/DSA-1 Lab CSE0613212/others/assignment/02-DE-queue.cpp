#include <iostream>
#define MAX 10
using namespace std;

class DEqueue
{
private:
    int front;
    int rear;
    int size;
    int arr[MAX];

public:
    DEqueue() // constructor to initialize the queue
    {
        front=-1;
        rear=-1;
        size=0;
    }

    // Check if DEqueue is full
    bool isFull()
    {
        return (size==MAX);
    }

    //CHECK IF DEqueue  is empty
    bool isEmpty()
    {
        return (size==0);
    }

// insert elements at the front
    void insertFront(int key)
    // if front is not empty then we will go circular way for the next index (clockwise)
    {
        if(isFull()) //checking overflow before insertion
        {
            cout<<"Overflow: DEqueue is full\n";
            return;
        }

        if(front==-1)
        {
            front=0; // not deleting
            rear=0;  // just shifting the index
        }
        else if(front == 0)
        {
            front = MAX -1; // for circular logic

        }
        else
        {
            front--;

        }

        arr[front]=key;
        size++;
    }

    void deleteRear()
    {
        if(isEmpty()) //checking overflow before insertion
        {
            cout<<"Underflow: Queue is empty\n";
            return;
        }
        if(front==-1)
        {
            front=0; // not deleting
            rear=0;  // just shifting the index
        }
        else if(rear = MAX -1) //front == 0
        {
            rear == 0;
            //front = MAX -1;
            // for circular logic

        }
        else
        {
            rear++;
//            front--;

        }

        arr[rear]=key;
        size++;
    }

    void deleteFront()
    {
        if(isEmpty())
        {
            cout << "Underflow: Queue is empty\n";
            return;
        }
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else if(rear==0) //front==MAX-1
        {
            rear==MAX-1;
//            front =0;
        }
        else
        {
            front++; //move forward
        }
        size--;
    }

    display()
    {
        int i;
        if(isEmpty())
        {
            cout<<endl<<"Empty Queue"<<endl;
        }
        else
        {
            cout<<"Front -> " <<front;
            cout<<endl<<"items ->";
            for(i=front; i!=rear; i=(i+1)%MAX)
            {
                cout<<arr[i]<<"\t";
            }
            cout<<arr[i];
//            int i =front;
//            while(i!=rear)
//            {
//                cout<<arr[i]<<" ";
//                i=(i+1)%MAX;
//                //gives the same result as i++ while i!=SIZE
//            }
//            cout<<arr[i];
            //printing last index since while loop cannot print it
            // HW: find an alternative to writing this line
            cout<<endl<<"Rear -> "<<rear<<endl;
        }
    }


};


int main()
{
    DEqueue s;
    s.insertFront(10);
    s.insertFront(20);
    s.insertFront(30);
    s.insertFront(40);

    s.display();


    return 0;
}
