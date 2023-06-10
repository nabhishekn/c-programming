#include <stdio.h>

int setb(int a, int bit);
int clearb(int a, int bit);
int toggleb(int a, int bit);

int main(){
    
    int a, bit;
    printf("Enter number: ");
    scanf("%d", &a);
    printf("Enter bit num: ");
    scanf("%d", &bit);
    printf("new number after setting a bit = %d\n", setb(a, bit));
    printf("new number after clearing a bit = %d\n", clearb(a, bit));
    printf("new number after toggling a bit = %d\n", toggleb(a, bit));
    return 0;
}

int setb(int a, int bit){
    int newnum;
    newnum = a | (1<<bit);
    
    return newnum;
    }

int clearb(int a, int bit){
    return a = a & ~(1<<bit);
}

int toggleb(int a, int bit){
    return a = a ^ (1<<bit);
}