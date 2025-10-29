#include <stdio.h>
#include "Array.h"

int main(){
    int n;
    printf("Please Enter The Size of the Array: ");
    scanf("%d", &n);

    int arr[n];
    initArray(arr,n);
    printf("Original Array\n");
    printArray(arr,n);
    reverseArray(arr,n);
    printf("Array After Reversing\n");
    printArray(arr,n);

    return 0;
}
