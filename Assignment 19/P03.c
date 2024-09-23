// WAP to print first occurance of duplicate value in Array using function and function has to return the element.


#include<stdio.h>

void input(int[], int);
void set_array(int [], int);
void display(int [], int);

int main()
{
    int size;

    printf("Enter Array size : ");
    scanf("%d",&size);

    int arr[size];
    input(arr, size);
    display(arr,size);
    set_array(arr,size);
    display(arr,size);

    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    printf("\nEnter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void set_array(int arr[], int size)
{
    int index, val;
    printf("\nEnter Index Number & Value (index:value) : ");
    scanf("%d:%d",&index,&val);
    arr[index] = val;
    
}

void display(int arr[], int size)
{
    printf("\nYour Array is : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}


/*

Enter Array size : 10

Enter 10 Numbers : 1 2 3 4 5 6 7 8 9 10
Your Array is : 1 2 3 4 5 6 7 8 9 10 
Enter Index Number & Value (index:value) : 4:500
Your Array is : 1 2 3 4 500 6 7 8 9 10 

*/