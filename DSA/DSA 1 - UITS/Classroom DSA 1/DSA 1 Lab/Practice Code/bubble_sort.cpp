#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    int swapCount = 0;
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
                swapCount++;
            }
        }
        for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
        if (!swapped) break; // Optimization: If no swaps, array is already sorted
    }

    cout << swapCount << endl;
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[] = {5,1,4,2,8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);

    cout << "Sorted array using Bubble Sort: ";
    printArray(arr, n);

    return 0;
}

