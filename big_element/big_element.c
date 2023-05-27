#include <stdio.h>

//C function to find maximum in arr[] of size n

int largest(int arr[], int n)
{
    int i;

    //initialize maximum element
    int max = arr[0];

    //Traverse array element from 
    //second and copare from
    //element with current max

    for (i=1; i<n; i++)
    if (arr[i]>max)
    max = arr[i];

    return max;
}

int main()
{
    int arr[] = {-8, -34, -44, 0, -88 };
    int n = sizeof(arr)/sizeof(arr[0]);
    printf("Largest number in given array is %d", largest(arr,n));
    return 0;
}