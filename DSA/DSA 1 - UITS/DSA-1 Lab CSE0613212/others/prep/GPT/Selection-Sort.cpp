#include <bits/stdc++.h>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i; // Assume current element is the smallest
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j; // Update index of the smallest element
            }
        }
        swap(arr[i], arr[minIndex]); // Swap the smallest element with the first unsorted element
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter array size:\n> ";
    cin >> n;
    int arr[n];

    cout << "Enter array elements:\n> ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "\nOriginal Array: ";
    printArray(arr, n);

    selectionSort(arr, n);

    cout << "\nSorted Array: ";
    printArray(arr, n);

    return 0;
}
