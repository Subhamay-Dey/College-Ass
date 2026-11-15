#include <stdio.h>

int BinarySearch(int arr[], int size, int element) {
    int low = 0;
    int high = size-1;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(element == arr[mid]) {
            return mid;
        }
        else if(element < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid +1;
        }
    }
}

int main() {
    int arr[] = {4, 4, 4, 5, 5, 54, 54, 57,
        61, 334, 341, 345, 643, 654, 745,
        3567, 6541, 8983, 213245, 3213454,
        3223556, 56656453, 456487831};
    int element = 6541;
    int size = sizeof(arr)/sizeof(int);
    int searchindex = BinarySearch(arr, size, element);

    if(searchindex != -1) {
        printf("Element found at index: %d\n", searchindex);
    }
    else {
        printf("Element not found\n");
    }

}