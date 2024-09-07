// c program patterns.

#include<stdio.h>

int main() {
    
    int count = 1;
    for(int i=0; i<=3; i++)
    {
        
        for(int j=1; j<=7-i; j++)
        {
            
            if(i>=j){
                printf("  ");
            }else{
                printf("%c ",64+count);
                count++;
            }
            
        }
        printf("\n");
        count = 1;
        
    }
    
    
    printf("\n");
    return 0;
}


/*

A B C D E F G 
  A B C D E 
    A B C 
      A 

*/




