// WAP to take input 10 values of an Array from user, find second largest and second smallest number.

#include<stdio.h>

void input(int [], int);
void second_larger(int [], int);
void display(int[], int);

int main()
{
    int size;
    printf("Enter Array Size : ");
    scanf("%d",&size);
    
    int arr[size];
    input(arr,size);
    second_larger(arr,size);
    display(arr,size);
    
    
    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void second_larger(int arr[], int size)
{
    int temp;
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
        if(arr[i]>arr[j])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            temp = 0;
        }
        }
    }
    
    printf("\nThe Second Smallest Number is : %d",arr[1]);
    printf("\nThe Second Largest Number is : %d",arr[size-2]);
}

void display(int arr[], int size)
{
    printf("\nSorted Numbers are : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}


/*

Enter Array Size : 10
Enter 10 Numbers : 22 65 23 478 12 35 65 80 14 20

The Second Smallest Number is : 14
The Second Largest Number is : 80
Sorted Numbers are : 12 14 20 22 23 35 65 65 80 478 

*/