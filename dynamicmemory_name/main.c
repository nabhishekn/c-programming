/******************************************************************************

Allocate dynamic memory to the string 

*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *name;
    int limit;
    printf("Enter maximum length of name: ");
    scanf("%d", &limit);
    
    //allocate runtime memory 
    name = (char*) malloc(limit * sizeof(char));
    printf("Enter name: ");
    getchar();
    gets(name);
    
    printf("Hi! %s, How are you?\n", name);
    free(name);
    name = NULL;

    return 0;
}
