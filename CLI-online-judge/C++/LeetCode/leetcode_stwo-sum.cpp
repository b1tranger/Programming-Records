#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr;
    int n;
    cin >> n;
    int x;
    for(int i = 0; i <n; i++)
    {
        cin >> x;
        arr.push_back(x);
    }
    for(int i = 0; i <n; i++)
    {
//        cin >> x;
//        arr.push_back(x);
        cout << arr[i] << " " ;
    }





    return 0;
}
