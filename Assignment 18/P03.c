// WAP to Average of 10 Numbers take Arrays.

#include<stdio.h>

void input(int [], int);
void avrg(int [], int);

int main()
{

    int arr[10];
    
    printf("Array of size 10 take input of numbers.");

    input(arr, 10);
    avrg(arr,10);

    printf("\n");
    return 0;
}

void avrg(int arr[], int size)
{
    float avg=0;
    int sum=0;

    for(int i=0; i<size; i++)
        sum = sum + arr[i];

    avg = sum/10.0;

    printf("The Average of %d Number is : %f",size,avg);

}


void input(int arr[], int size)
{
    printf("\nEnter %d Numbers\n",size);
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
}


/*

Array of size 10 take input of numbers.
Enter 10 Numbers
1 2 2 2 1 3 2 2 2 3
The Average of 10 Number is : 2.000000

*/