// C program to for combination of n item and select r item at a time and also WAP for permutation.

#include<stdio.h>
#include<stdlib.h>

int check_digit(int,int);
void prime_fact(int);

int main() 
{
    int val,num,digit;
    
    while(1)
    {
        printf("\n\n--- SOFTWARE --- \n\n");
        printf("1. Check Digit. ?\n");
        printf("2. Prime Factor of Number?\n");
        printf("3. Exit\n\n");
        
        printf("Enter Your Option : ");
        scanf("%d",&val);
        
        switch(val)
        {
            case 1:
                printf("Enter Number :");
                scanf("%d",&num);
                printf("Enter Digit : ");
                scanf("%d",&digit);
                if(digit<10 && digit>=0){
                    int k = check_digit(num,digit);
                    if(k>0)
                        printf("%d Contains %d.",num,digit);
                    else
                        printf("%d is NOT Contains %d.",num,digit);
                }
                else{
                    printf("Enter Only single Digit Number!");
                }
                break;
            
            case 2:
                printf("Enter Number :");
                scanf("%d",&num);
                if(num>0)
                    prime_fact(num);
                break;
                
            case 3:
                exit(0);
            
            default:
                printf("Incorrect Option!");
        }
        
    }
    
    printf("\n");
    return 0;
}

int check_digit(int num, int digit)
{
    if(num == digit)
        return num;
        
    int sum;
    while(num)
    {
        sum = num%10;
        num = num/10;
        if(digit == sum)
            return 1;
    }
    
    return 0;
    
}

void prime_fact(int num)
{
    int i = 2;
    printf("Prime Factors are : ");
    while(num>1)
    {
        if(num%i == 0){
            num = num/i;
            printf("%d ",i);
        }else {
            i++;
        }
    }
}



/*

--- SOFTWARE --- 

1. Check Digit. ?
2. Prime Factor of Number?
3. Exit

Enter Your Option : 2
Enter Number :36
Prime Factors are : 2 2 3 3 

*/