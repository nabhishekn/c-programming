// #include <stdio.h>

// int main()
// {
//     int mynumber;
//     printf("Enter a number:");
//     scanf("%d", &mynumber);

//     int x = mynumber%2;
//     if (x == 0)
//     {
//         printf("The number is Even");
//     }else{
//         printf("The number is odd");
//     }

//     return 0;
// }


#include <stdio.h>


#define NUMBER 13257
int main ()
{
    int a = NUMBER%2;
    if (a == 0)
    {
        printf("Even");
    }else
    {
        printf("Odd");
    }
    return 0;    
}