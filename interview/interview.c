#include<stdio.h>

// void main(void){
//     unsigned int x = 10 ;
//     int y = -40;
//     if(x+y > 10) {
//         printf("Greater than 10");
//     } else {
//         printf("Less than or equals 10");
//     }
  
// }

#define MAX(x,y) (((x+y)>10)?x:y)
int main()
{
     unsigned int x = 10 ;
     int y = -40;
     int c = x+y;
     printf("%d\n", c);
    int max=MAX(x,y);
     printf("%d\n", max);
     return 0;
}