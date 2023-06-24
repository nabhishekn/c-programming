/*Code is to find duplicate number in array*/
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

//function definition - logic 
int duplicate(int *arr, int size)
{
    int i, temp, j;
    int ar[MAX] = {0};
    for(i=0; i<MAX; i++){
        for(j=i+1; j<size; j++){
            if(arr[i]==arr[j]){                     //comparing i[0] and j[1] 
                printf("Duplicate number is = %d", arr[i]);
                exit(0);
                }
            }
        }
    }

int main(){
    int size, i, *arr;
    printf("Enter number of elements in an array\n");
    scanf("%d", &size);
    arr = (int*) malloc(sizeof(int)*size);              //assigning run time memory to arr pointer
    printf("Enter element to an array:\n");
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }
    duplicate(arr, size);           //calling function
    return 0;
}