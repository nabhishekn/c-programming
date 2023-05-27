#include <stdio.h>

int main(){
    int a = 1288;
    int *pt = &a;
    unsigned long long int b = 1773737;
    int *h = &b;
    char c = 'A';
    char *cp = &c;
    int ia [20] = {10, 32, 44, 456, 9};
    int *i = &ia;


    int *ptr = NULL;
    printf("%d\n", sizeof(pt));
    printf("%d\n", sizeof(ptr));
    printf("%d\n", sizeof(h));
    printf("%d\n", sizeof(cp));
    printf("%d\n", sizeof(i));
    printf("-------------------\n\n");
    int k;
    for(k=0; k<4; k++){
    int j;
    for(j=0; j<5; j++)
    {
        printf("%d\n", ia[j]);
    }
    printf("-------------------\n");
    }
    return 0;

}