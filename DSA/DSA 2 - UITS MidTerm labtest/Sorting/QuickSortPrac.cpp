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

int partArray(vector<int> &arr, int low, int high)
{
    int pos = low-1;
    int pivot = arr[high];
    for(int index=low; index<high; index++)
    {
        if(arr[index]<pivot)
        {
            pos++;
            swap(arr[index], arr[pos]);
        }
    }
    pos++;
    swap(arr[pos], arr[high]);
    return pos;

}

void quicksort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int pivotPos = partArray(arr, low, high);
        quicksort(arr,low,pivotPos-1);
        quicksort(arr,pivotPos+1,high);
    }
}

int main()
{
    vector<int> arr= {9,7,5,3,2,12,1};
    quicksort(arr,0,arr.size()-1);
    cout<<"After Sorting the array "<<endl;
    printArray(arr);
}
