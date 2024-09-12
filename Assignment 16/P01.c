#include<stdio.h>

void number(int);

int main() 
{

    int num;

    printf("Enter Number : ");
    scanf("%d",&num);
    number(num);

    printf("\n");
    return 0;
}

void number(int num)
{
    
    if(num == 1)
    
        return num;
}

