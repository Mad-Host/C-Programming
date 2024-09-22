
#include <stdio.h>

int sum_of_N(int);

int main() {

    
    int num;
    
    printf("To printf first N natural numbers addition\n");
    
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("%d Number Sum is : %d",num,sum_of_N(num));
    
            
    printf("\n");
    return 0;
}


int sum_of_N(int num)
{
    if(num>0)
    { 
        return num +sum_of_N(num-1);
    }
    else 
        return 0;
}


/*

Enter Number : 100
100 Number Sum is : 5050

*/