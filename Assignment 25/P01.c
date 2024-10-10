// WAP to swap a two values using pointers ( TSRN ).

#include<stdio.h>

void swap(int *, int *);

int main()
{

    int a, b;
    printf("Enter Two Numbers (2:3) : ");
    scanf("%d:%d",&a,&b);
    printf("Your Response : %d and %d\n",a,b);

    swap(&a,&b);
    printf("The Two Values are : %d and %d\n",a,b);

    printf("\n");
    return 0;
}


void swap(int *p, int *q)
{
    int c = *p;
    *p = *q;
    *q = c;
}


/*

Enter Two Numbers (2:3) : 25:60
Your Response : 25 and 60
The Two Values are : 60 and 25

*/

