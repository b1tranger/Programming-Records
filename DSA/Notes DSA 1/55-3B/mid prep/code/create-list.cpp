#include <iostream>
using namespace std;

int main()
{

    struct node
    {
        int data;
        node *next;
    };
    int i,n,item;
    node *nptr,*tptr,*list;
    list = NULL;
    cout<< "Enter the number of nodes:\n";
    cin >> n;
    cout << "\nEnter data for node with space:\n";
    for(i=1; i<=n; i++)
    {

        cin>>item;
        nptr = new(node);
        nptr->data = item;
        nptr ->next=NULL;
        if(list==NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr=nptr;
        }
    }

    tptr = list;
    for(i = 1; i<=n; ++i)
    {
        cout << endl;
        cout<<tptr->data;
        tptr =tptr->next;
        cout<<" ";
    }
    cout<<endl;
    cout<< endl;

    return 0;
}
