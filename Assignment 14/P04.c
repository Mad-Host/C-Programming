// C program to print first N natural numbers.

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
    for(int i=1; i<=n; i++)
    {
        printf("%d ",i);
    }
}

/*

Enter Your Number : 7
1 2 3 4 5 6 7 

*/