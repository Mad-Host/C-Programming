// WAP to find the next prime number of a given number.

#include<stdio.h>
#include<stdlib.h>

int main() 
{
    
    int num,i = 2,count = 0;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);
    num++;
    
    while(1)
    {
        if(num%i == 0){
            num++;
            i = 1;
        }
        
        if(num-1 <= i){
            printf("Next Prime Number is : %d",num);
            exit(0);
        }
        
        i++;
        
    }
    
    printf("\n");
    return 0;
}


/*

Enter Your Number : 20
Next Prime Number is : 23

*/



