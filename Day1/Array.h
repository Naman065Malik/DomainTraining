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

void insertion(int arr[], int size, int loc, int item){
    for(int i = size - 1; i >= loc; i--)
        arr[i] = arr[i-1];
    arr[loc-1] = item;
}

void deletion(int arr[], int size, int loc){
    for(int i = loc -1; i<size; i++)
        arr[i] = arr[i+1];
}

int max(int arr[], int size){
    int max = 0;
    for(int i = 0; i<size; i++)
        if(arr[i] > arr[max])
            max = i;
    return max;
}

int min(int arr[], int size){
    int min = 0;
    for(int i = 0; i<size; i++)
        if(arr[i] < arr[min])
            min = i;
    return min;
}

int partition(int arr[], int low, int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    while(i<= j){
        while(arr[i] < pivot && i <= high)
            i++;
        while(arr[j] > pivot && j >= low)
            j--;

        if(i<j){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    arr[low] = arr[j];
    arr[j] = pivot;
    return j;
}

void quickSort(int arr[], int low, int high){
    if(low<high){
        int idx = partition(arr, low, high);
        quickSort(arr,low,idx);
        quickSort(arr,idx+1,high);
    }
}