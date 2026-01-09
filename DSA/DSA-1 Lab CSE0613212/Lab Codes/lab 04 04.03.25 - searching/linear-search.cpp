#include <iostream>
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
    cout << "\n\nInput array: \n\n";
    for(int i = 0; i <10; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\n(checking for target variable)\n\n input target variable:\n\n";
    cin >> n;
    cout << "\n";
    for(int i = 0; i < 10; i++)
    {
        if(flag==false)
        {
            if(a[i]==n)
            {
//                flag=true;
//                p = i+1;
//                break;
                p++; // to count total findings
            }
        }
        else
        {
            continue;
        }

    }
    cout << "target variable " << n << "\n\nTotal findings:  " << p;
//    if (flag==true)
//    {
//        cout << "target variable " << n << "\n\nTotal findings:  " << p;
//    }
//    else
//    {
//        cout << "Not Found";
//    }

    cout << "\n\n\n";
    return 0;
}
