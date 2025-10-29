void reverseArray(int arr[], int size){
    for(int i = 0; i< size/2; i++){
        int temp = arr[i];
        arr[i] = arr[size - 1 - i];
        arr[size - 1-  i] = temp;
    }
}

void initArray(int arr[], int size){
    printf("Please Enter %d Numbers to create an Array: ",size);
    for(int i = 0; i<size; i++)
        scanf("%d", &arr[i]);
}

void printArray(int arr[], int size){
    printf("Array: ");
    for(int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}