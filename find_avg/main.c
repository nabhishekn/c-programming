/*Find average of entered numbers using while loop*/

#include<stdio.h>

int main(){
    int count=0;
    int sum=0;
    int a;
    printf("Enter counts: ");
    scanf("%d", &a);

    while(count<a){
        printf("Enter an integer: ");
        int number;
        scanf("%d", &number);
        sum = sum + number;
        count++;
    }

    double avg = (double)sum/(double)count;
    printf("Average of the numbers:%lf", avg);

    return 0;
}