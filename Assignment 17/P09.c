// WAP to calculate the power of any number using recursion.

#include<stdio.h>

int num_power(int, int);

int main()
{
    int num,power;
    
    printf("Enter Number and Power : ");
    scanf("%d %d",&num,&power);
    
    printf("The Power of %d is : %d",num,num_power(num,power));
    
    printf("\n");
    return 0;
}

int num_power(int num, int power)
{
    
    if(power>0)
        return num * num_power(num,power-1);
        
    if(power == 0)
        return 1;
    
}




/*

Enter Number and Power : 3 3
The Power of 3 is : 27

*/