#include <iostream>
using namespace std;

int main()
{
    int a[3][3];
    int b[3][3];
    int c[3][3];
    cout << "Input array 1:\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> a[i][j];
        }
    }
//    cout << "Input array 2:\n\n";
//    for(int i=0; i<3; i++)
//    {
//        for(int j=0; j<3; j++)
//        {
//            cin >> b[i][j];
//        }
//    }
//    cout << "\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c[i][j]=a[j][i];
        }
    }
    cout << "\n\n TRANSPOSED MAT:\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << c[i][j] << "  ";
        }
        cout << endl;
    }


    return 0;
}
