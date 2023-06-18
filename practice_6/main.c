/*C program to find the product of a set of real numbers*/

#include <stdio.h>

int main(){

    int count;
    printf("Enter the count of real number: ");
    scanf("%d", &count);

    int i;
    static float product = 1.0;

    /*for loop to take count number of entries from user*/
    for(i=0; i<count; i++){
        printf("Enter a real number: \n");
        float x;
        scanf("%f", &x);
        product = product * x;                      //product of real numbers
}

printf("The product of the real number is: %f", product);

return 0;
}