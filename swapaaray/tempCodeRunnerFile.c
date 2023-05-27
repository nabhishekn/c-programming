#include <stdio.h>

int main()
{
    int arraysize = 3;
    int array1[arraysize];
    int array2[arraysize];

    printf("Enter array 1: \n");

    for (int i=0; i < arraysize; i++)
    {
        scanf("%d", &array1[i]);
    }

    printf("Enter array 2: \n");

    for(int i=0; i<arraysize; i++)
    {
        scanf("%d", &array2[i]);
    }

    printf("Print Array before swapping:\n");

    printf("Array 1: ");
    for (int i=0; i < arraysize; i++)
    {
        printf("%d\t", array1[i]);
    }

    printf("\nArray 2: ");
    for (int i=0; i < arraysize; i++)
    {
        printf("%d\t", array2[i]);
    }

    printf("\nPrint Array after swapping:\n");
    int temp[arraysize];
    for (int i=0; i<arraysize; i++)
    {
        temp[i] = array1[i];
        array1[i] = array2[i];
        array2[i] = temp[i];
    }

    printf("Array 1: ");
    for (int i=0; i < arraysize; i++)
    {
        printf("%d\t", array1[i]);
    }

    printf("\nArray 2: ");
    for (int i=0; i < arraysize; i++)
    {
        printf("%d\t", array2[i]);
    }

    return 0;


}