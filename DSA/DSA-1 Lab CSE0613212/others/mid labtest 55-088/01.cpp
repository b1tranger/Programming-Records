#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\n[ CREATING MATRIX ]\n\n";
    cout << "Enter Row=Column of a square Matrix:\n> ";
    int n=0;
    cin >> n;

    int arr[n][n];
    cout <<"\n\nEnter Matrix values (Row by Row):\n>\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout <<"\n\nEntered Matrix:\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout <<endl;
    }

    cout <<"\n\n[ CHECKING IF DIAGONAL OR NOT ]\n\n";
    bool flag = false;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i!=j)
            {
                if(arr[i][j]==0)
                {
                    flag = true;
                }
                else
                {
                    break;
                }
            }
        }
        if(flag==false)
        {
            break;
        }
    }
    cout << "\nConfirming the given conditions,\n";
    if(flag==true)
    {
        cout<<"\n\n\tYES\n\nMatrix is DIAGONAL\n\n";
    }
    else
    {
        cout<<"\n\n\tNo\n\nMatrix is NOT DIAGONAL\n\n";
    }




    return 0;
}
;
