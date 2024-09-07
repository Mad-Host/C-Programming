// C Program to print patterns.

#include<stdio.h>

int main() 
{
    int count='A';
    for(int i=1; i<=5; i++)
    {
        
        for(int j=1; j<=7; j++)
        {
           
                if(j<=5-i || j>=3+i){
                    printf("%c",count);
                    j<4? count++:count--;
                }else {
                    printf(" ");
                    if(j ==4)
                        count--;
                }
            
        }
        
        printf("\n");
        count = 'A';
    }
    
    
    printf("\n");
    return 0;
}



/*

ABCDCBA
ABC CBA
AB   BA
A     A

*/