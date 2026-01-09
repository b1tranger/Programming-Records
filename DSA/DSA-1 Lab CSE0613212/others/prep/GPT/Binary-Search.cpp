#include <iostream>
#include <algorithm> // For sort()
using namespace std;

// Function for Binary Search
int binarySearch(int arr[], int size, int key) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2; // To avoid overflow

        if (arr[mid] == key) {
            return mid; // Key found
        } else if (arr[mid] < key) {
            left = mid + 1; // Search right half
        } else {
            right = mid - 1; // Search left half
        }
    }

    return -1; // Key not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    // Binary search requires a sorted array
    sort(arr, arr + size);

    int result = binarySearch(arr, size, key);

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
