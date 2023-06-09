#include <stdio.h>

int main(){
    int t;
    printf("Enter temperature in degrees: ");
    scanf("%d", &t);

    float f = ((9*t)/5)+32;     //convert degree to fah and store into f variable
    printf("\nTemperature in fahrenheit: %f", f);
    return 0;
}