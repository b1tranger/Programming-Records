#include <iostream>
#include <algorithm>

using namespace std;

struct node
{
    int data;
    struct node *next;
};


int main()
{
    node *a=NULL;
    node *b=NULL;
    node *c=NULL;
// memory allocation
    a=new node();
    b=new node();
    c=new node();

    a->next=b;
    b->next=c;
    c->next=a;

    a->data=5;
    b->data=6;
    c->data=7;

    int loop=0;
    while(a!=NULL)
    {
        if(loop%10==0)//custom
        {//custom
            cout<<endl;//custom
        }//custom
        cout<<a->data<<" ";
        a=a->next;

        if(loop==100)//custom
        {//custom
            break;//custom
        }//custom
        else//custom
        {//custom
            loop++;//custom
        }//custom
    }


    return 0;
}
