// WAP to check wheather the number is prime or Not a prime number.

#include<stdio.h>

int main() {
    
    int num,i;
    
    printf("Enter Your Number : ");
    scanf("%d",&num);


    for(i=2; i<=num-1; i++)
        if(num%i == 0)
            break;
    
    if(num == i)
        printf("Its prime number");
    else 
        printf("Not a Prime.");
  
    
    printf("\n");
    return 0;
}



/*

Enter Your Number : 13
Its prime number


*/