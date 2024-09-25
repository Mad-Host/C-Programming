// WAP to sum of two matrix of order 3.

#include<stdio.h>

void input(int [][3], int);
void display(int [][3], int);
void add(int[][3], int[][3], int);

int main()
{
    // creating an array of size 3x3.
    int arr[3][3],brr[3][3];
    input(arr, 3);
    display(arr, 3);
    input(brr, 3);
    display(brr,3);

    add(arr,brr,3);


    printf("\n");
    return 0;
}

void input(int arr[][3], int size)
{
    printf("Enter the value inside in Array.\n");

    for(int i=0; i<size; i++)
    {
        printf("--- Enter Row %d Element ---\n",i);
        for(int j=0; j<size; j++)
        {
            printf("Enter arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
}


void display(int arr[][3], int size)
{
    printf("Response : \n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }
}


void add(int arr[][3], int brr[][3], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ",arr[i][j] + brr[i][j]);
        }
        printf("\n");
    }
}
