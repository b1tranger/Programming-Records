#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    bool flag = false;
    int a[10],n,p=-1;

    cout << "Input Array of size 10:\n\n";
    for(int i = 0; i <10; i++)
    {
        cin >> a[i];
    }

    sort(a,a+10);

    cout << "\n\nSORTED Input array: \nL=0,R=10\n";
    for(int i = 0; i <10; i++)
    {
        cout << a[i] << " ";
    }

    int L=0,R=10,mid,found=0;
    cout << "\n\n(checking for target variable)\n\n input target variable:\n\n";
    cin >> n;
    cout << "\n";


    for(int i = L; i<=R-1; i++)
    {
        mid=L+(R-L)/2;
        if(mid==n)
        {
            found = 1;
            p = i+1;
        }
        else if(n>mid)
        {
            L = mid+1;
        }
        else if(n<mid)
        {
            R= mid-1;
        }
    }
    if(found==1)
    {
        cout<< "\n\nTarget found at " << p << " no. index";
    }
    else
    {
        cout<< "\n\nTarget not found";
    }

    cout << "\n\n\n";
    return 0;
}
