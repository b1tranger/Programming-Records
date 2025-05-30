#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cout << "INPUT ARRAY SIZE:\n\n";
    cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    cout << "\n\nOUTPUT ARRAY:\n\n";

    for(int i=0; i<n; i++)
    {
        cout << ar[i] << " ";
    }

// PREFIX SUM

    int pre[n];

    pre[0]=ar[0];
    for(int i=1; i<n; i++)
    {
        pre[i]=pre[i-1]+ar[i];
    }
    cout << "\n\nPREFIX SUM ARRAY:\n\n";
    for(int i=0; i<n; i++)
    {
        cout << pre[i] << " ";
    }

    cout << "\n\nINPUT QUERY:\n\n";

    int q;// total operations / query
    cin >> q;
    while(q--)
    {
        int l,r,sum=0;
        cin >> l >> r;
        if(l==0)
        {
            cout<< pre[r]<<endl;
        }
        else
        {
            sum = pre[r]-pre[l-1];
            cout<<sum<<endl;
        }

    }

    return 0;
}
