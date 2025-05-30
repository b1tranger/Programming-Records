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

void deleteAtPosition(int position)
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    if(position==1)
    {
        node *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    node *temp=head;
    for(int i=1; i<position-1 && temp!=NULL; i++)
    {
        temp=temp->next;
    }
    node *nodeToDelete=temp->next;
    temp->next=temp->next->next;
    delete nodeToDelete;

}


int main()
{
    insertAtBeginning(10);
    insertAtBeginning(20);
    insertAtBeginning(30);
    insertAtBeginning(40);
    insertAtBeginning(50);
    display();
    deleteAtPosition(2);
    display();

//    cout<<"List count: " <<sizeofList()<<endl; ;
    return 0;
}
