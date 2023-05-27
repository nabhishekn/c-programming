#include <stdio.h>

int main()
{
    int arr[100] = {0};
    int i, x, pos, n = 10;

    for (i=0; i<10; i++)
    {
        arr[i] = i + 1;
        
    }
    for (i=0; i<n; i++)
    {
        printf("%d\t", arr[i]);
    }

    //element to be inserted
    x=50;

    //position at which elemet is to be inserted
    pos = 5;

    //increase the size of n by 1
    n++;

    //shift elements forward
    for (i=n-1; i>=pos; i--)
    
        arr[i]=arr[i-1];

        arr[pos-1] = x;
    
    
    //print the updated array
    printf("\n");
    for (i=0; i<n; i++)
    {
        
        printf("%d\t", arr[i]);
        //printf("\n");
    }
    return 0;
}