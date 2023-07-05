/******************************************************************************
To count the words in a given string
*******************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define str_size 100

int main()
{
    char str[str_size];
    int i, wrd;
    printf("\nEnter string: ");
    fgets(str, sizeof str, stdin);
    
    i=0;
    wrd=1;
    
    //loop till end of string
    while(str[i] != '\0')
    {
        //check whether current character white space, new line or tab
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            wrd++;
        }
        i++;
    }
    printf("\nTotal number of words in string:%d", wrd-1);

    return 0;
}
