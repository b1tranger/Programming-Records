#include <iostream>
using namespace std;

int main()
{
    int arr[5][5];
    int trackI, trackJ;
    for(int i = 0; i <5; i++)
    {
        for(int j = 0; j <5 ; j++)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {
                trackI = i;
                trackJ = j;
            }
        }
    }
//    cout << trackI <<endl;
//    cout << trackJ <<endl;
    int count=0;
    while(trackI!=2)
    {
        if(trackI!=2)
        {
            if(trackI<2)
            {
                trackI++;
//                cout << "\ntrackI++\n";
//                cout << trackI <<endl;
            }
            else if(trackI>2)
            {
                trackI--;
//                cout << "\ntrackI--\n";
//                cout << trackI <<endl;
            }
        }

        count++;

    }
    while(trackJ!=2)
    {
        if(trackJ!=2)
        {
            if(trackJ<2)
            {
                trackJ++;
//                cout << "\ntrackJ++\n";
//                cout << trackJ <<endl;
            }

            else if(trackJ>2)
            {
                trackJ--;
//                cout << "\ntrackJ--\n";
//                cout << trackJ <<endl;
            }
        }
        count++;

    }

    cout << count;



    return 0;
}
