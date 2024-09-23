// WAP to calculate an Array to rotate n position and d directions. d is indactive direction for left and right.

#include <stdio.h>
#include<stdlib.h>

void input(int [], int size);
void left_rotate(int [], int, int);
void right_rotate(int[], int, int);
void display(int [], int);

int main() {
    
    int val,elem,size;
    
    // Taking size of an Array.
    printf("Enter Array Size : ");
    scanf("%d",&size);
    
    // Taking input from user.
    int arr[size];
    input(arr,size);
    printf("1. Left Position\n");
    printf("2. Right Position\n");
    printf("3. Exit\n");
    printf("Enter Your Choice : ");
    scanf("%d",&val);
    
    // Program to ask user to make a choice.
    switch(val)
    {
        case 1: 
            printf("How many Numbers to rotate in Right Direction : ");
            scanf("%d",&elem);
            left_rotate(arr,size,elem);
            display(arr, size);
            break;
            
        case 2:
            printf("Tell Me How many Numbers to rotate in Left Direction : ");
            scanf("%d",&elem);
            right_rotate(arr,size,elem);
            display(arr, size);
            break;
            
        case 3:
            exit(0);
        
        default: 
            printf("Invalid Value!");
    }
    
    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void left_rotate(int arr[], int size, int elem)
{
    for(int i=0; i<elem; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(j == size-1)
                break;
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            temp = 0;
        
        }
    }
}

void right_rotate(int arr[], int size, int elem)
{
    for(int i=0; i<elem; i++)
    {
        for(int j=size-1; j>0; j--)
        {
            if(j == 0)
                break;
                
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            temp = 0;
        
        }
    }
}

void display(int arr[], int size)
{
    printf("\nRotate Array is : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}

/*

CASE 01 : 

Enter Array Size : 10
Enter 10 Numbers : 22 77 65 102 512 63 59 86 10 30
1. Left Position
2. Right Position
3. Exit
Enter Your Choice : 1
How many Numbers to rotate in Right Direction : 3

Rotate Array is : 102 512 63 59 86 10 30 22 77 65 

CASE 02 : 

Enter Array Size : 10
Enter 10 Numbers : 102 512 63 59 86 10 30 22 77 65
1. Left Position
2. Right Position
3. Exit
Enter Your Choice : 2
Tell Me How many Numbers to rotate in Left Direction : 3

Rotate Array is : 22 77 65 102 512 63 59 86 10 30 


*/

