#include <stdio.h>
#include "Array.h"

int main(){
    int n, loc, item;
    printf("Please Enter The Size of the Array: ");
    scanf("%d", &n);

    int arr[n];
    initArray(arr,n);
    printf("Original Array\n");
    printArray(arr,n);
    heapSort(arr,n);
    printArray(arr,n);

    return 0;
}
