#include <iostream>
using namespace std;

int main()
{
    //int r1,c1,r2,c2;
    //cin>>r1>>c1>>r2>>c2;
//    if(c1!=r2){cout<<"cannot multiply";}


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
    cout << "Input array 2:\n\n";
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cin >> b[i][j];
        }
    }
    cout << "\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout << "\n\nADDITION:\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << c[i][j] << "  ";
            c[i][j]=0;
        }
        cout << endl;
    }

    cout << "\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
        }
    }
    cout << "\n\nSUBTRACTION:\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << c[i][j] << "  ";
            c[i][j]=0;
        }
        cout << endl;
    }
    cout << "\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<3; k++)
            {
                c[i][j]+=a[i][k]*b[k][j];
            }

        }
    }
    cout << "\n\nMULTIPLICATION:\n\n";

    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout << c[i][j] << "  ";
            c[i][j]=0;
        }
        cout << endl;
    }

    return 0;
}
