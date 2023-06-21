/******************************************************************************

reverse string using recursion

*******************************************************************************/
#include <stdio.h>
#define MAX 100
char* reverseofstring(char str1[]);


int main(){
char str1[MAX], *revstr2;
printf("Enter string: ");
scanf("%s", str1);
revstr2 = reverseofstring(str1); //calling function
printf("%s", revstr2);

return 0;
}

//reverse string function definition
char* reverseofstring(char str1[]){
    static int i;
    static char revstr2[MAX];
    if (*str1){
        reverseofstring(str1+1);
        revstr2[i++] = *str1;
    }
    return revstr2;
}