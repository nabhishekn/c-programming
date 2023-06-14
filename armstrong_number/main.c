/*to find armstrong number
Armstrong number is the sum of cube of its digits*/

#include <stdio.h>

int isArmstrong(int num);                   //function declaration

int main(){
    int number;
    printf("Enter an interger number: ");
    scanf("%d", &number);

    if(isArmstrong(number)){
        printf("%d is an Armstrong number", number);
    }else
        printf("%d is not an Armstrong number", number);
return 0;
}

int isArmstrong(int num){
    int temp = num;
    int rem;
    int sum = 0;
/*check if temp is not a zero*/
    while(temp>0){
    rem = temp%10;                  //get last digit of the number
    sum = sum + rem*rem*rem;        
    temp = temp/10;                 //division to get another numbers
    }

    if(sum==num){                   //check if sum==num then return 1 to the main function
    return 1;}
    else{
    return 0;}
}