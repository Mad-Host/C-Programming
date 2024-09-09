// C program to print first  odd N natural numbers.

#include<stdio.h>

void print_numbers(int);
int main() 
{
    int num;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);
    
    if(num>0)
        print_numbers(num);
    else 
        printf("%d, Number is Negative.",num);
    
    printf("\n");
    return 0;
}

void print_numbers(int n)
{   
    int count = 0,i=1;
    
    while(n){
        if(i%2 != 0){
            printf("%d ",i);
            count++;
        }
        
        if(count == n){
            break;
        }
        
        i++;
    }
     
}

/*

Enter Your Number : 10

1 3 5 7 9 11 13 15 17 19 

*/