#include<stdio.h>

int linearSearch(int arr[], int size, int element) {
    for (int i = 0; i < size; i++)
    {
        if(arr[i] == element) {
            return i;
        }
    }
    return -1;
    
}

int main () {
    int arr[] = {4,5,5,654,643,341,61,54,4,54,3213454,345,334,745,213245,6541,56656453,456487831,4,3223556,8983,3567,57};
    int size = sizeof(arr)/sizeof(int);
    int element = 745;
    int searchindex = linearSearch(arr, size, element);
    printf("The searched number %d is found at the index %d \n", element, searchindex);
    return 0;
}