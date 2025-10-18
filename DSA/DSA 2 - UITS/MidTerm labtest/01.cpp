#include <bits/stdc++.h>
using namespace std;

int newOP()
{
    cout << "\n\t[ Enter corresponding number ]\n\n";
    cout << "[ 1 ] Vector Application\n";
    cout << "[ 2 ] Queue\n";
    cout << "[ 3 ] Stack\n";
    cout << "[ 4 ] Map\n";
    cout << "\n[ 0 ] End Operation\n";
    cout << "____________________\n[ Input ]\t";
    int n;
    cin >> n;
    return n;
}

void finOP()
{
    cout << "\n\n\t[ All Operations Completed ]\n\n";
}

void vectorOP()
{
    cout<< "\n\n[ Vector Operation ]\n\n";
    cout << "Create a vector of,\n[ 1 ] Known Size\n[ 2 ] Unknown Size\n";
    cout << "____________________\n[ Input ]\t";
    int n;
    cin >> n;
    if(n==1)
    {
        cout<< "\nInput Vector Size:\t";
        int x;
        cin >> x;
        vector<int> vec01(x);
        cout << "\n[ Created vector<int> of Size " << x <<" ]\n";
        cout << "____________________\n\nInput values into the vector until " << x <<"th term\n\n";
        for(int i=0; i<x; i++)
        {
            cin >> vec01[i];
        }
        cout << "\n\n\tVector created:\n\n";
        for(int i=0; i<x; i++)
        {
            cout<< vec01[i] << "   ";
        }
        cout << "\n\nVector Operations:\n[ 1 ] push_back\n[ 2 ] pop_back\n[ 3 ] sort\n[ 4 ] reverse vector\n[ 5 ] delete an element\n[ 6 ] clear memory\n";



    }
    else
    {
        cout << "\n\t[ Invalid Input ]\n";
    }
    finOP();

};
void queueOP() {};
void stackOP() {};
void mapOP() {};


int main()
{
    int n=-1;
    while(n!=0)
    {
        n = newOP();
        if(n==1)
        {
            vectorOP();
        }
        else if(n==2)
        {
            queueOP();
        }
        else if(n==3)
        {
            stackOP();
        }
        else if(n==4)
        {
            mapOP();
        }
        else if(n==0)
        {
            finOP();
        }

    }

    return 0;
}
