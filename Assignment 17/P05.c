// Square of first N Numbers.

#include <stdio.h>

void square_of_numbers(long int);

int main() {
   
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    square_of_numbers(num);
    
    printf("\n");
    return 0;
}

void square_of_numbers(long int num)
{
    if(num>0)
    {
        square_of_numbers(num-1);
        printf("%ld ",num*num);
    }
}

/*

Enter Number : 20
1 4 9 16 25 36 49 64 81 100 121 144 169 196 225 256 289 324 361 400 

*/