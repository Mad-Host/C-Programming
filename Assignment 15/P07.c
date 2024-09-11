// find the nth term of the series.

#include<stdio.h>

int fact(int);
int fact_of(int);

int main()
{
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    printf("The sum of first %d is : %d",num,fact_of(num));
    
    
    printf("\n");
    return 0;
}

int fact_of(int num)
{
    int sum=0,i=1;
    
    while(num>=i){
        printf("+ %d!/%d",i,i);
        sum = sum + fact(i)/i;
        i++;
    }
    printf("\n");
    
    return sum;
}

int fact(int n)
{
    int sum = 1;
    for(int i=1; i<=n; i++)
    {
        sum = sum * i;
    }
    return sum;
}

/*

Enter Number : 5
+ 1!/1+ 2!/2+ 3!/3+ 4!/4+ 5!/5
The sum of first 5 is : 34

*/