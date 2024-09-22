// WAP to calculate Array of size 10 take input of numbers.

#include<stdio.h>

void input(int [], int);
void sum(int [], int);

int main()
{

    int arr[10];
    
    printf("Array of size 10 take input of numbers.");

    input(arr, 10);
    sum(arr,10);

    printf("\n");
    return 0;
}

void sum(int arr[], int size)
{
    int sum = 0;
    for(int i=0; i<10; i++)
        sum = sum + arr[i];
    
    printf("The sum of %d is : %d",size,sum);
}


void input(int arr[], int size)
{
    printf("\nEnter %d Numbers\n",size);
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
}


