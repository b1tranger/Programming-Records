#include <iostream>
#include <algorithm>

using namespace std;

struct node *creatlinkedlist(int arr[],int size);

struct node
{
    int data;
    struct node *next;
};

int main()
{
//    int n;
//    cin>>n;
//int arr[n];
//int s=sizeof(arr)/sizeof(arr[0]);

    int a[]= {5,10,25,40};
    struct node *head;
    head=creatlinkedlist(a,4);
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
    return 0;
//    for(int i=0; i<size; i++)
//    {
//        cout<<
//    }


}

struct node *creatlinkedlist(int arr[],int size)
{
    struct node *head=NULL,*temp=NULL,*current=NULL;
    for(int i=0; i<size; i++)
    {
        temp= new node();//temp for insertion
        temp->data=arr[i];
        temp->next=NULL;
        if(head==NULL)
        {
            head=temp; //if first element
            current=temp;
        }
        else
        {
            current->next=temp; // if next element
            current=current->next;
        }
    }

    return head;


};












