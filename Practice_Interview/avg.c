#include <stdio.h>

int main()
{
    int count;
    printf("Enter the count of number: ");
    scanf("%d", &count);

    int i = 0;
    float sum = 0;
    for (i=0; i<count; i++){
        printf("Enter an %d integer: ", i);
        int x;
        scanf("%d", &x);
        sum = sum + x;
        }
        float avg = sum/count;
        printf("The average is: %f\n", avg);

        return 0;
}