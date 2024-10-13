#include "ShakeSort.h"

template <typename A>
void ShakeSort(A arr[], int n) {
    bool swap = true;
    int start = 0;
    int end = n - 1;

    while (swap) {
        swap = false;
        for (int i = start; i < end; ++i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = true;
            }
        }

        
        if (!swap) {
            break;
        }
        --end;
        swap = false;
        for (int i = end - 1; i >= start; --i) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                swap = true;
            }
        }
        ++start;
    }
}