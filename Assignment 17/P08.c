// WAP to count the digit of given number using recursion.
#include <stdio.h>

int count_digit(int);

int main() {
    
    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    printf("%d has %d digits.",num,count_digit(num));
    
    printf("\n");
    return 0;
}


int count_digit(int num)
{
    int count = 1;
    if(num>0){
        return count + count_digit(num/10);;
    }
        
}



/*

Enter Number : 78945
78945 has 5 digits.

*/