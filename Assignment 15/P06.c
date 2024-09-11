// C program to print First N Fibonacii series.

#include<stdio.h>

void fibon(int);

int main()
{
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    fibon(num);
    
    printf("\n");
    return 0;
}

void fibon(int num)
{
    printf("First %d of Fibonacii series is : ",num);
    printf("0 1 ");
    int perv = 0,curr=1,sum=0,count=0;
    
    while(num>count)
    {
        sum = perv + curr;
        printf("%d ",sum);
        perv = curr;
        curr = sum;
        count++;
    }
}


/*

Enter Number : 10

First 10 of Fibonacii series is : 0 1 1 2 3 5 8 13 21 34 55 89 

*/