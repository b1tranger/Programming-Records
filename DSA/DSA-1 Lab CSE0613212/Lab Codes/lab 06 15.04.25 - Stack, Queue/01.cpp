#include <bits/stdc++.h>
//#include<iostream>
using namespace std;

#define Size 100

class Stack
{
    int arr[Size];
    int top;

public:
    Stack()
    {
        top=-1;
    }

    void push(int val)
    {
        if(top==Size-1)
        {
            cout <<"Stack is full"<<endl;
            return; // works like break
        }
        else
        {
            top++;
            arr[top]=val;
        }
    }

    void pop() //no arguments, no parameters
    {
        if(top==-1)
        {
            cout <<"Stack is empty"<<endl;
            return; // works like break
        }
//        else
//        {
        cout << "Element popped "<<arr[top]<<endl;
        top--;
        //arr[top]=val;
//        }
    }

    void peek()  //prints the value of top index
    {
        cout <<arr[top]<<endl;
    }

    bool isEmpty()
    {
        if(top==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void display()
    {
        for(int i=top; i>=0; i--)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
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
    s.push(60);
    s.push(70);
    s.push(80);
//    s.display();
    while(s.isEmpty()!=true)
    {
        if(s.isEmpty())
        {
        }
        else
        {
            s.pop();
        }

    }
//s.pop();
//s.pop();
//s.pop();
//s.pop();
//s.pop();

    cout<< "Top element is " ;
    s.peek();
    cout<<endl;
    if(s.isEmpty())
    {
        cout<<"Stack is Empty\n";
    }
    else
    {
        cout<<"Stack is not Empty\n";
    }

    return 0;
}
