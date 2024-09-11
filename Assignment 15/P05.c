
// Online C compiler to run C program online
#include<stdio.h>
#include<stdlib.h>

void n_prime(int);
void two_prime(int,int);

int main() {
    
    int num,val,a,b;
    
    while(1){
    printf("\n\nMenu Driven Program.\n\n");
    printf("1. N Prime Numbers\n");
    printf("2. All Prime Numbers Between Two Numbers.\n");
    printf("3. Exit\n\n");
    
    printf("Enter Choice : ");
    scanf("%d",&val);
    
   
    switch(val)
    {
        case 1: 
            printf("Enter First N Number : ");
            scanf("%d",&num);
            n_prime(num);
            break;
            
        case 2:
            printf("Enter Numbers : ");
            scanf("%d %d",&a,&b);
            two_prime(a,b);
            break;
            
        case 3:
            exit(0);
            
        default:
            printf("\nInvalid Choice!");
    }
    
    }
    printf("\n");
    return 0;
}

void n_prime(int num)
{
    printf("First %d Prime Number are : ",num);
    
    int count=0,val=2;
    
    for(int i=2; count>num; i++)
    {
        if(val%i == 0)
        {
            val++;
        }
        
        i>val? printf("%d ",val): val++;
        
    }
    
    
}

void two_prime(int a, int b)
{
    
    if(a == b || a>b)
        printf("Invalid Numbers! First Number should be smaller than 2nd. ");
    else if(a == b-1)
        printf("Incorrect Numbers");
    else
    {
        printf("%d to %d prime number are : ",a,b);
        int i=2;
        a++;
        while(a<b)
        {
        if(a == i)
        {
            printf("%d ",a);
            a++;
            i = 2;
        }
        
        if(a%i == 0)
        {
            a++;
            i = 2;
        }
    
        i++;
    }
    
    }
}


/*

Menu Driven Program.

1. N Prime Numbers
2. All Prime Numbers Between Two Numbers.
3. Exit

Enter Choice : 2
Enter Numbers : 1 11
1 to 11 prime number are : 2 3 5 7 

*/