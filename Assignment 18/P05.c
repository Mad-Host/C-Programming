// C Program of an Array having 10 Numbers stored print the greater Number amoung 10 Numbers.

#include<stdio.h>
void input(int[], int);
void arr_greater_num(int [], int);
void display(int [], int);

int main()
{
    int arr[10];
    
    printf("Enter %d Numbers\n",10);
    input(arr,10);
    printf("\nAll Numbers are sucessfully strored!\n");
    display(arr,10);
    arr_greater_num(arr,10);
    
    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    printf("Enter Number %d : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);   
    
}

void arr_greater_num(int arr[], int size)
{
    int great = arr[0];
    for(int i=1; i<size; i++)
    {
        if(great<arr[i])
            great = arr[i];
    }
    
    printf("\n\nThe Greater Number amoung the array is : %d",great);
}

void display(int arr[], int size)
{
    printf("Submitted Response :  ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}

/*

Enter 10 Numbers
Enter Number 10 : 22 65 23 78 35 98 32 78 99 478

All Numbers are sucessfully strored!
Submitted Response :  22 65 23 78 35 98 32 78 99 478 

The Greater Number amoung the array is : 478

*/