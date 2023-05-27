#include <stdio.h>
#include <stdlib.h>

void main()
{
    int a[10], i, n, key, low, high, mid;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("\nEnter the %d values in order\n", n);

    for (i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d", &key);
    printf("Array Elements are:");
    for (i=0; i<n; i++)
    {
        printf("\n%d", a[i]);
    }
    low=0;
    high=n-1;
    while (low<=high)
    {
        mid=(low+high)/2;
        if (a[mid]==key)
        {
            printf("\nSearched is successful, Number found ..!\n");
            exit (0);
        }
        else if (key<a[mid])
        high=mid-1;
        else
        low=mid+1;
    }
    printf("\nSearched is successful, Number is not found ..!\n");
}