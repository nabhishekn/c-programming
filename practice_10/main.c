/*To find square of array elements*/

#include <stdio.h>

void process(int arr[], int size, int (*callback)(int)){
    for(int i=0; i<size; i++)
    {
        arr[i] = callback(arr[i]);
    }
}

int square(int n){
    return n * n;
}


int main(){
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Array Elements Before Processing: " );
    for (int i=0; i<size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    process(arr, size, square);

    printf("Square of the array elements after processing: ");

        for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}