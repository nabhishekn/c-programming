/******************************************************************************

to check the leap year using this program

*******************************************************************************/
#include <stdio.h>

int main()
{
    int year;
    printf("Enter the year you want to check: ");
    scanf("%d", &year);
    
    int leap = 0;
    
    //check if it is divided by 4
    if (year%4 == 0){
        //check if it is divided by 100
        if (year%100 == 0){
            //check if it is divided by 400
            if (year%400 == 0)
            leap = 1;
            else 
                leap = 0;
        }
        //if the year is not century 
        else
            leap = 1;
    } else 
        leap = 0;
        
        if(leap == 1){
            printf("%d this yeal is a leap year", year);
        }else
        printf("%d this yeal is not a leap year", year);

    return 0;
}
