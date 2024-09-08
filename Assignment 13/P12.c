// C Recursive program to print first N Natural Numbers.

#include <stdio.h>

int number(int);
int main() {

    int num;
    
    printf("Enter Number : ");
    scanf("%d",&num);
    
    printf("Natural Numbers :");
    number(num);

    printf("\n");
    return 0;
}

int number(int n)
{
    if(n>0)
    {
        number(n-1);
        printf(" %d",n);
    }
   
}


/*

Enter Number : 10

Natural Numbers : 1 2 3 4 5 6 7 8 9 10

*/