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
                    printf("%d",count);
                    j<4? count++:count--;
                }else {
                    printf(" ");
                    if(j ==4)
                        count--;
                }
            
        }
        
        printf("\n");
        count = 1;
    }
    
    
    printf("\n");
    return 0;
}



/*

1234321
123 321
12   21
1     1
       

*/