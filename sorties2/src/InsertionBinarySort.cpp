#include "InsertionBinarySort.h"

template<typename A>
int BinarySearch(A arr[], int item, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == item) {
            return mid + 1; 
        }
        else if (arr[mid] < item) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }
    return low; 
}

template<typename A>
void InsertionBinarySort(A arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;

       
        int loc = BinarySearch(arr, key, 0, j);

        
        while (j >= loc) {
            arr[j + 1] = arr[j];
            j--;
        }

        
        arr[j + 1] = key;
    }
}