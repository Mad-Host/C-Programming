// C program to print pattern.

#include<stdio.h>

int main() 
{   
    
    int rows,cols;
    
    printf("Enter Rows : ");
    scanf("%d",&rows);
    
    cols = rows*2 + 1;
    int count = cols/2;
    count++;
    
    for(int i=rows; i>=0; i--)
    {
        for(int j=1; j<=cols; j++)
        {
            if(i>=j){
                printf("  ");
            }else{
                printf("* ");
                if(count == j)
                    break;
            }       
            
        }
        printf("\n");
        count++;
        
    }
    
    printf("\n");
    return 0;
}

/*

Enter Rows : 5

          * 
        * * * 
      * * * * * 
    * * * * * * * 
  * * * * * * * * * 
* * * * * * * * * * * 

*/