// C Program to print patterns.

#include<stdio.h>

int main() 
{
    int count=1;
    for(int i=1; i<=5; i++)
    {
        
        for(int j=1; j<=7; j++)
        {
           
                if(j<=5-i || j>=3+i){
                    printf("*");
                }else 
                    printf(" ");
            
            
        }
        
        printf("\n");
        
    }
    
    
    printf("\n");
    return 0;
}


/*

*******
*** ***
**   **
*     *

*/