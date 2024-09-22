
#include <stdio.h>

int sum_of_even_N(int);

int main() {

    
    int num;
    
    printf("To printf sum of first N  Even natural numbers addition\n");
    
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("%d Number Sum is : %d",num,sum_of_even_N(num));
    
            
    printf("\n");
    return 0;
}


int sum_of_even_N(int num)
{
    if(num>0)
    {   
        return num*2 + sum_of_even_N(num-1);
    }
    else 
        return 0;
}


/*

To printf sum of first N  Even natural numbers addition
Enter Number : 10
10 Number Sum is : 110

*/