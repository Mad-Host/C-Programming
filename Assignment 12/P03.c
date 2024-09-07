// C patterns programs.

#include<stdio.h>

int main() 
{
    int count = 4;
       
    for(int i=3; i>=0; i--)
    {
        for(int j=1; j<=count; j++)
        {
            if(i>=j){
                printf(" ");
            }
            else if(i==3 && j==4){
                printf("  *");
            }
            else {
                printf(" *");
               
            }
            
        }
        printf("\n");
         count++;
        
    }
    
    
    printf("\n");
    return 0;
}


/*

     *
   * * *
  * * * * *
 * * * * * * *


*/

