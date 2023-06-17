/******************************************************************************
Return : 0-success, 1-fail
stringcmp : compare two Strings
stringcmpi : compare two strings (ignorig case)
*******************************************************************************/
#include <stdio.h>
#include <ctype.h>

/*function declaration*/
int stringcmp(char *s1, char *s2);
int stringcmpi(char *s1, char *s2);

int main()
{
    char str1[100], str2[100];
    printf("Enter string 1: ");
    scanf("%[^\n]s", str1);
    getchar();
    printf("Enter string 2: ");
    scanf("%[^\n]s", str2);
    
    if(!stringcmp(str1, str2))
        printf("\n stringcmp: Strings are same.");
    else
        printf("\n stringcmp: Strings are not same.");
        
    if(!stringcmpi(str1, str2))
        printf("\n stringcmpi: Strings are same.");
    else
        printf("\n stringcmpi: Strings are not same.");
        
    printf("\n");
return 0;
}

/*function to compare string*/
int stringcmp(char *s1, char *s2)
{
    int i=0;
    for(i=0; s1[0]!='\0'; i++)
    {
        if(s1[i]!=s2[i])
        return 1;
    }
    return 0;
}

/*function to compare string with ignoring case*/
int stringcmpi(char *s1, char *s2)
{
    int i=0, diff=0;
    for(i=0; s1[i]='\0'; i++)
    {
        if(toupper(s1[i])!=toupper(s2[i]))
        return 1;
    }
    return 0;
}