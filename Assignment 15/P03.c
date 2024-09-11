// C program to print LCM of given numbers.

#include<stdio.h>

int hcf(int,int);

int main()
{
    int a,b;
    printf("Enter Two Number for HCF : ");
    scanf("%d %d",&a,&b);
    
    printf("HCF of %d and %d is : %d",a,b,hcf(a,b));
    
    printf("\n");
    return 0;
}


int hcf(int a, int b)
{
    int flag=0, i=2, tempA, tempB,sum=1;
    
    while(a != 1 && b != 1)
    {
        if(a%i == 0)
        {
            a = a/i;
            flag = 1;
            tempA = i;
        }
        
        if(b%i == 0)
        {
            b = b/i;
            flag = 1;
            tempB = i;
        }
        
        if(flag == 1)
        {
            if(tempA == tempB){
                sum = sum * tempA;
                tempA = 0;
                tempB = 0;
            }
            
            flag = 0;
        }
        else 
            i++;
    }
    
    return sum;
}


/*

Enter Two Number for HCF : 17 89

HCF of 17 and 89 is : 1

*/