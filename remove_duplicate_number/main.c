#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int nonduplicate(int *arr, int size)
{
    int i;
    int ar[MAX] = {0};
    for(i=0; i<size; i++)
    {
        ar[arr[i]]++;
        if(ar[arr[i]]==1){
            printf("%d\n", arr[i]);
        }

    }

}
int main()
{
    int i, size, *arr;
    printf("Enter the size of an array:\n");
    scanf("%d", &size);
    arr = (int*) malloc(sizeof(int)*size);
    printf("Enter elements:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("After removing duplicate elements:\n");
    nonduplicate(arr, size);
    return 0;
}