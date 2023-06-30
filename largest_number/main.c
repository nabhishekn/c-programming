/******************************************************************************

largets number program

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i, size, arr[100];
    printf("Enter Size of the array: ");
    scanf("%d", &size);

    //loop will take inputs from user
    for(i=0; i<size; i++){
        printf("Enter %d element: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    //This loop will compare elements in array
    for(i=1; i<size; ++i){
        if(arr[0]<arr[i]){
            arr[0]=arr[i];
        }
    }
    printf("Largest Number is:%d", arr[0]);
    

    return 0;
}
