// C program to print LCM of given numbers.

#include<stdio.h>

int prime_checker(int);
int next_prime(int);

int main()
{
    int num;
    
    printf("Program to check weather the given number is Prime or NOT and also to print Next Prime Number\n");
    printf("NOTE : if number is prime than Answer is 1 otherwise its 0.\n\n");
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    printf("%d is %d\n",num,prime_checker(num));
    printf("Next Prime is %d",next_prime(num));
    
    printf("\n");
    return 0;
}

int prime_checker(int num)
{
    int i=2;
    while(1)
    {
        if(num%i == 0)
            return 0;
        
        if(num<i)
        {
        return 1;
        }
        else{
             i++;
        }
    }
}

int next_prime(int num)
{
    int i=2;
    num++;
    while(1)
    {
        if(num%i == 0)
            num++;
        else 
            i++;
        
        if(i == num-1)
            return num;
    }
    
}


/*

Program to check weather the given number is Prime or NOT and also to print Next Prime Number
NOTE : if number is prime than Answer is 1 otherwise its 0.

Enter Number : 49
49 is 0
Next Prime is 53

*/