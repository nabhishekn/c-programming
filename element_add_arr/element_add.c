#include <stdio.h>

int main()
{
    //let's assume the maximum array size as 100
    int arr[100], size, i, sum = 0;

    //Get size input from user
    printf("Enter array size\n");
    scanf("%d", &size);
    
    //Get all elements using for loop store it in array
    printf("Enter array elemts\n");
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    //Add all elements to the variable sum
    for(i=0; i<size; i++)
        sum = sum + arr[i];

    //Prints the result
    printf("Sum of the array = %d\n", sum);

    return 0;
}