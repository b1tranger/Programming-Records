#include <bits/stdc++.h>
using namespace std;


void mergeArray(vector<int> &arr, int low, int mid, int high)
{
    int leftSize = (mid+1)-low;
    int rightSize = high-mid;
    // temporary array creation
    vector<int> leftArray(leftSize), rightArray(rightSize);

    // temporary array value insertion
    for(int i=low; i<mid+1; i++)        // i=low
    {
        leftArray[i-low]=arr[i];        // leftSize = i-low = 0
    }
    for(int i=mid+1; i<high+1; i++)     // i=mid+1
    {
        rightArray[i-(mid+1)]=arr[i];   // rightSize = i-(mid+1) = 0
    }

    // merge left and right partitions while sorting??
    int leftPoint = 0, rightPoint = 0, arrayPos = low;
    // arrayPos = arr modification index, leftPoint = rightPoint = partition Array size
    while(leftPoint<leftSize && rightPoint<rightSize)
    {
        if(leftArray[leftPoint]<rightArray[rightPoint])
        {
            arr[arrayPos]=leftArray[leftPoint];
            leftPoint++;
            //arrayPos++;
        }
        else
        {
            arr[arrayPos]=rightArray[rightPoint];
            rightPoint++;
        }
        arrayPos++;
    }

    // Copy leftovers
    while(leftPoint<leftSize)
    {
        arr[arrayPos]=leftArray[leftPoint];
        leftPoint++;
        arrayPos++;
    }
    while(rightPoint<rightSize)
    {
        arr[arrayPos]=rightArray[rightPoint];
        rightPoint++;
        arrayPos++;
    }
}



void mergeSort(vector<int> &arr, int low, int high)
{
    if(low<high)
    {
        int mid = (low+high)/2;         // Divide
        mergeSort(arr,low,mid);         // left partition
        mergeSort(arr, mid+1, high);    // Right Partition
        mergeArray(arr, low, mid, high);// Conquer
    }
}


int main()
{
    vector<int> arr = { 10, 4, 3, 2, 1, 5, 6};
    mergeSort(arr, 0, arr.size()-1);
    // sorted array output
    cout << endl << endl;
    for(int x : arr)
    {
        cout << x << " ";
    }

    return 0;
}
