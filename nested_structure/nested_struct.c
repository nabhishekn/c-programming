#include <stdio.h>


struct mystruct{
    float f;
    int j[5];
    struct student{
    char a;
    char b;
    int c[10];
}stud;

};

int main(){
    struct mystruct stud1;
    printf("%ld", sizeof(stud1));
    return 0;
    }