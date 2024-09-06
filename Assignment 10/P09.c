// All the prime numbers under the given numbers.

#include<stdio.h>

int main() 
{
    
    int num,val=1,count = 0,i,j;
    
    printf("All Prime Numbers Under : ");
    scanf("%d",&num);
    
    for(i=2; i<num; i++)
    {
        for(j=2; j<i; j++)
        {
            if(i%j == 0){
            count++;
            }
        }
        
        if(count<=0){
        printf("%d ",i);
        }else {
            count = 0;
        }
        
        
    }
    
    
    printf("\n");
    return 0;
}


/*

All Prime Numbers Under : 100

2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 

*/

