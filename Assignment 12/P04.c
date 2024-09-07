// C patterns programs.

#include<stdio.h>

int main() 
{
    int count = 4,num = 1,flag = 1;
       
    for(int i=3; i>=0; i--)
    {
        
        for(int j=1; j<=count; j++)
        {
            
          if(i>=j){
              printf("  ");
          }else{
              
              if(flag>=num && j<=4){
                printf("%d ",num);
                if(j<4)
                    num++;
              } else{
                  --num;
                  printf("%d ",num);
              }
              
          }
        
            
        }
        
        printf("\n");
        count++;
        flag++;
        num = 1;
    }
    
    
    printf("\n");
    return 0;
}




/*

      1 
    1 2 1 
  1 2 3 2 1 
1 2 3 4 3 2 1 

*/