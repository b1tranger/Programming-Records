#include <iostream>
#include <algorithm>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head=NULL;

void insertAtBeginning(int value)
{
    node *newNode=new node();
    newNode->data=value;
    newNode->next=head;
    head=newNode;
}

void insertAtPosition(int value, int position)
{
    node *newNode=new node();
    newNode->data=value;
    if(position==1) // counting variable
    {
        newNode->next=head;
        head=newNode;
        return; // breaks out of the function
        // can be used in void
    }
    node *temp=head;
    for(int i=1; i<position-1 && temp!=NULL; i++)
        //position-1 inserts until before the last node
        // set position to insert at tail/end
    {
        temp=temp->next;

    }
    newNode->next=temp->next;
    temp->next=newNode;
}

void insertAtEnding(int value)
{
    node *newNode=new node();
    newNode->data=value;
    node *temp=head;
    while(temp->next!=NULL)
//        for(int i=1; i<position-1 && temp!=NULL; i++)
        //position-1 inserts until before the last node
        // set position to insert at tail/end
    {
        temp=temp->next;

    }
    newNode->next=temp->next;
    temp->next=newNode;
}

int sizeofList()
{
    node *temp=head;
    int cnt=0;
    for(int i=1; temp!=NULL; i++)
    {
        temp=temp->next;
        cnt++;
    }
    cout<<"List count: " <<cnt<<endl;
    return cnt;
}

void display()
{
    node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}


int main()
{
    insertAtBeginning(10);
     insertAtBeginning(10);
    insertAtBeginning(10);
    display();
    sizeofList();
    insertAtEnding(50);
    insertAtPosition(111,2);
    insertAtPosition(222,4);
    display();
    sizeofList();
//    cout<<"List count: " <<sizeofList()<<endl; ;
    return 0;
}
