/*This code is using to detect prime number*/

#include <stdio.h>

int main(){
    int n, i, flag = 0;
    printf("Enter Number to find prime number: ");
    scanf("%d", &n);
/*Set a flag if there is a 0 or 1*/
    if (n == 0 || n == 1){
        flag = 1;
    }
/*if n is divisible by i, then n is not prime*/
    for(i=2; i<=n/2; ++i)
    {
        if(n%i == 0){
            flag = 1;           //set flag 1 for non prime number
            break;
    }
}
     if (flag == 0)
    printf("%d is a prime number.", n);
  else
    printf("%d is not a prime number.", n);

  return 0;
}
