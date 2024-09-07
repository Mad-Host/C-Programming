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
                if(j<=4){
                printf("%c ",64+count);
                if(j<4)
                    count++;
                }
                else{
                    count--;
                    printf("%c ",64+count);
                }
            }
            
        }
        printf("\n");
        count = 1;
        
    }
    
    
    printf("\n");
    return 0;
}


/*

A B C D C B A 
  A B C B A 
    A B A 
      A 


*/




