// C program to print LCM of given numbers.

#include<stdio.h>

int lcm(int,int);

int main()
{
    int a,b;
    printf("Enter Two Number for LCM : ");
    scanf("%d %d",&a,&b);
    
    printf("LCM of %d and %d is : %d",a,b,lcm(a,b));
    
    printf("\n");
    return 0;
}

int lcm(int a, int b)
{
    for(int i=1; i<=10; i++)
    {
        for(int j=1; j<=10; j++)
        {
            
            if(a*i == b *j)
                return a*i;
            
        }
            
    }
}


