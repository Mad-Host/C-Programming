// C program to swap the values of two variables.

#include<stdio.h>

void swap(int *, int *);

int main()
{
    int a,b;

    printf("Enter Numbers : ");
    scanf("%d %d",&a,&b);

    swap(&a,&b);
    printf("a : %d , b : %d",a,b);

    printf("\n");
    return 0;
}


void swap(int *p, int *q)
{
    int c;
    c = *p;
    *p = *q;
    *q = c;

}






