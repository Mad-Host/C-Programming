// Recursion question to take input from user and sum of the digits of number.

#include <stdio.h>

void digit_of_sum(int, int);

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    digit_of_sum(num,0);
    
    printf("\n");
    return 0;
}

void digit_of_sum(int num,int sum)
{
    if(num>0)
    {
        sum = sum + num%10;
        digit_of_sum(num/10,sum);
    }
    if(num == 0)
        printf("Sum of digits is  : %d\n",sum);
}

/*

Enter Number : 235
Sum of digit is  : 10

*/



//------------------------------   ANOTHER METHOD   --------------------



// Recursion question to take input from user and sum of the digits of number.

// #include <stdio.h>

// int digit_of_sum(int);

// int main() {
    
//     int num;
    
//     printf("Enter Number : ");
//     scanf("%d",&num);
//     printf("Sum of digits is : %d",digit_of_sum(num));
    
//     printf("\n");
//     return 0;
// }

// int digit_of_sum(int num)
// {

//     if(num == 0)
//         return 0;
//     return digit_of_sum(num/10)+num%10;
// }

