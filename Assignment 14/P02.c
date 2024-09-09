// C program to Simple interest.

#include<stdio.h>

int simple_interest(int,int,int);
int main() 
{
    int p,t,r;
    
    printf("Simple Interest Calulater!\n");
    printf("Enter P R T :");
    scanf("%d %d %d",&p,&r,&t);
    printf("Simple Interest is : %d",simple_interest(p,r,t));
    
    
    printf("\n");
    return 0;
}

int simple_interest(int p,int r,int t)
{
    return p*t*r/100;
}


/*

Simple Interest Calulater!
Enter P R T :10000 4 5
Simple Interest is : 2000

*/