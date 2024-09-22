// WAP to Average of 10 Numbers take Arrays.

#include<stdio.h>

void input(int [], int);
void sum_of_even(int [], int);

int main()
{

    int arr[10];
    
    printf("-- Array of size 10 take input of numbers ---");

    input(arr, 10);
    sum_of_even(arr,10);

    printf("\n");
    return 0;
}

void sum_of_even(int arr[], int size)
{
    int sum=0;
    
    for(int i=0; i<size; i++)   
        sum = sum + arr[i];
        
    printf("The sum of %d Number is : %d",size,sum);
}


void input(int arr[], int size)
{
    printf("\nEnter %d Numbers\n",size);
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);
}


/*

-- Array of size 10 take input of numbers ---
Enter 10 Numbers
2 4 6 8 10 12 14 16 18 20 
The sum of 10 Number is : 110

*/