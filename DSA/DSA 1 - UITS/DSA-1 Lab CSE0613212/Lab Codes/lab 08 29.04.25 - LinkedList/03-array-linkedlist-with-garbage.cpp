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
    int q=-1;
    int arr[0];//empty array
    struct node *head=NULL,*temp=NULL,*current=NULL;
    int i=0;
    cout<<"Choose Query:\n0: abort\n1: input element\n2: display\n\n";
    while(q!=0)
    {
        int val,Size=0;
        cin>>q;
        if(q==0)
        {
            cout<<"Query Finshed\n";
            break;
        }
        else if(q==1)
        {
            cout<<"Query for input\n";
            cin>>val;
            arr[i]=val;
            temp= new node();//temp for insertion
            temp->data=val;
            temp->next=&arr[i+1];

            if(head==NULL)
            {
                head=&arr[i];
            }

            temp=&arr[i];
            Size++;
        }
        else if(q==2)
        {
            cout<<"\n\n List So far: \n";
                for(int j=0; j<Size; j++)
            {
                cout<<arr[j];
            }
            cout<<endl;
        }
        i++;
    }
}

//struct node *creatlinkedlist(int arr[],int size)
//{
//    struct node *head=NULL,*temp=NULL,*current=NULL;
//    for(int i=0; i<size; i++)
//    {
//        temp= new node();
//        temp->data=arr[i];
//        temp->next=NULL;
//    }
//
//};












