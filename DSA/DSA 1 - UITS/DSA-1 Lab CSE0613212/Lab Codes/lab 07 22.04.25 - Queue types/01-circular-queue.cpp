#include <iostream>
#define SIZE 5
using namespace std;

class Queue
{
private:
    int items[SIZE], front, rear;

public:
    Queue()
    {
        front=-1;
        rear=-1;
    }
    bool isFull() // can be done in main()
    {
        if(front==0 && rear==SIZE-1)
        {
            return true;
        }
        else if(front==(rear+1)%SIZE)
            // initially used if but supposedly causes some issues
        {
            return true;
        }
        return false;
    }
    void enQueue(int element)
    {
        if(isFull())
        {
            cout << "Queue is Full" << endl;
        }
        else
        {
            if(front==-1)
            {
                front =0;
            }
            rear= (rear+1)%SIZE;
            items[rear]=element;
            cout << endl <<"Inserted" <<element<<endl;
        }
    } // to address circular motion, we are not shifting front and rear like simple queue

    int deQueue()// we can declare as void
    {
        int element;
        if(isEmpty())
        {
            cout << "Queue is empty" << endl;
            return (-1); // for void case we would just print the message
        }
        else
        {
            element=items[front];
            if(front==rear)
            {
                front=-1;
                rear=-1;
            }
            //Queue has only one element
            //so we reset the queue after deletion
            else
            {
                front =(front+1)%SIZE;
            }
            return (element);
        }
    }

    int isEmpty()
    {
        if(front==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }


    void peek()
    {
        cout<<"Front -> "<<front;
    }

    void display()
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
//            for(i=front; i!=rear; i=(i+1)%SIZE)
//            {
//                cout<<items[i]<<"\t";
//            }
            int i =front;
            while(i!=rear)
            {
                cout<<items[i]<<" ";
                i=(i+1)%SIZE;
                //gives the same result as i++ while i!=SIZE
            }
            cout<<items[i];
            //printing last index since while loop cannot print it
            // HW: find an alternative to writing this line
            cout<<endl<<"Rear -> "<<rear<<endl;
        }
    }

};


int main()
{
    Queue s;
    s.enQueue(10);
    s.enQueue(20);
    s.enQueue(30);
    s.enQueue(40);
    s.enQueue(50);

    s.display();

//
//    s.deQueue();
//    s.deQueue();
//    s.peek();
    return 0;
}
