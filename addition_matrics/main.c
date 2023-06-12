
/*Addition of 2 matrices*/

#include <stdio.h>

int main()
{
    //creating 2 matrics
    int a[3][3] = {{8,5,1},{9,3,2},{4,6,3}};
    int b[3][3] = {{8,5,3},{9,5,7},{9,4,1}};
    
    //define 1 more matrics to save the results
    int c[3][3];
    
    //adding 2 matrics
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            c[i][j] = a[i][j]+b[i][j];
            printf("%d ", c[i][j]);
        }
        
        printf("\n");
    }

    return 0;
}
