#include <bits/stdc++.h>
using namespace std;

void printArray(vector<int> &arr)
{
    for(int i=0; i<arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}



void quicksort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pivotPos = partArray(arr, low, high);
        quicksort(arr,low,pivotPos-1);
        quicksort(arrr,pivotPos+1,high);
    }
}

int main()
{
    vector<int> arr= {9,7,5,3,2,12,1};
    quicksort(arr,0,arr.size()-1);
    cout<<"After Sorting the array "<<endl;
    printArray(arr);
}
