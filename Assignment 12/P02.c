// C patterns programs.

#include<stdio.h>

int main() 
{
    
    for(int i=0; i<=3; i++)
    {
        
        for(int j=1; j<=7-i; j++)
        {
            
            if(i>=j){
                printf("  ");
            }else {
                printf("* ");
            }
            
        }
        printf("\n");
    }
    
    
    printf("\n");
    return 0;
}


/*

* * * * * * * 
  * * * * * 
    * * * 
      * 


*/