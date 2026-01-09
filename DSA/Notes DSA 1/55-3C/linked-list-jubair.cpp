#include <iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{

    int i, n, item, pos;
    node *nptr, *tptr,*list;
    list = NULL;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter data for node with space: ";
    for (i = 1; i <= n; ++i)
    {
        cin >> item;
        nptr = new node;
        nptr->data = item;
        nptr->next = NULL;
        if (list == NULL)
        {
            list = nptr;
            tptr = nptr;
        }
        else
        {
            tptr->next = nptr;
            tptr = nptr;
        }
    }

    cout << "Enter the case of insertion (Head: 1, Mid(ascending): 2, Tail: 3): ";
    cin >> pos;
    cout << "Enter the data for the new node: ";
    cin >> item;

    nptr = new node;
    nptr->data = item;
    nptr->next = NULL;

    if (pos == 1)
    {
        // Insert at head
        nptr->next = list;
        list = nptr;
    }
    else if (pos == 3)
    {
        // Insert at end
        tptr = list;
        while (tptr->next != NULL)
        {
            tptr = tptr->next;
        }
        tptr->next = nptr;
    }
    else if (pos == 2)
    {
        // Insert anywhere at mid position
        tptr = list;
        int count = 0;
        while (tptr->next->data < nptr->data)
        {
            tptr = tptr->next;
            count++;
        }
        if (tptr == NULL)
        {
            cout << "Position out of bounds" << endl;
        }
        else
        {
            nptr->next = tptr->next;
            tptr->next = nptr;
        }
    }

    // Print the final list
    tptr = list;
    cout << "Final linked list: ";
    while (tptr != NULL)
    {
        cout << tptr->data << " ";
        tptr = tptr->next;
    }
    cout << endl;

    return 0;
}
