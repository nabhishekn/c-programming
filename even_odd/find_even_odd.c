#include <stdio.h>

int main(){
    int mynumber;
    printf("Enter a number:");
    scanf("%d", &mynumber);

    int x = mynumber%2;
    if(x==0){
        printf("Number is even");
    }else{
        printf("Number is odd");
    }

    return 0;
}