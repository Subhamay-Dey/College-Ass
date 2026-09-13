#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    printf("Size of the array: %zu bytes\n", sizeof(arr));
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}