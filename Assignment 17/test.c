// WAP to calculate HCF and Fabinacci series.

#include<stdio.h>
#include<stdlib.h>

void fabin(int);

int main()
{
    int val,num,a,b;
    
    while(1)
    {
       printf("\n --- Program ----\n\n");
       printf("1. HCF of Two Number\n");
       printf("2. Fabinacci Series\n");
       printf("3. Exit\n\n");
       
       printf("Enter Your Choice : ");
       scanf("%d",&val);
       
       switch(val)
       {
            case 1:
                break;
                
            case 2:
                printf("Enter first Nth Number : ");
                scanf("%d",&num);
                fabin(num);
                break;
            
            case 3:
                exit(0);
            
            default:
                printf("Invalid Choice!");
       }
       
    }
}

void fabin(int num)
{
    if(num>0)
    {
        fabin(num-1);
        printf("%d ",num);
    }
}


