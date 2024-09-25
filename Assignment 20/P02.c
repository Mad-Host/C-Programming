// WAP to sum of two matrix of order 3.

#include<stdio.h>

void input(int [][3], int);
void display(int [][3], int);
void multi(int[][3], int[][3], int);

int main()
{
    // creating an array of size 3x3.
    int arr[3][3],brr[3][3];
    input(arr, 3);
    display(arr, 3);
    input(brr, 3);
    display(brr,3);

    multi(arr,brr,3);


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


void multi(int arr[][3], int brr[][3], int size)
{
    printf("\n-: Multiplication of Two Matrix :- \n");

    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            printf("%d ",arr[i][j] * brr[i][j]);
        }
        printf("\n");
    }
}

/*

Enter the value inside in Array.
--- Enter Row 0 Element ---
Enter arr[0][0] : 1
Enter arr[0][1] : 2
Enter arr[0][2] : 3

Enter arr[1][0] : 4
Enter arr[1][1] : 5
Enter arr[1][2] : 6

--- Enter Row 2 Element ---
Enter arr[2][0] : 7
Enter arr[2][1] : 8
Enter arr[2][2] : 9

Response : 
1 2 3 
4 5 6 
7 8 9 
Enter the value inside in Array.
--- Enter Row 0 Element ---
Enter arr[0][0] : 9
Enter arr[0][1] : 8
Enter arr[0][2] : 7

--- Enter Row 1 Element ---
Enter arr[1][0] : 6
Enter arr[1][1] : 5
Enter arr[1][2] : 4

--- Enter Row 2 Element ---
Enter arr[2][0] : 3
Enter arr[2][1] : 2
Enter arr[2][2] : 1

Response :
9 8 7
6 5 4
3 2 1

-: Multiplication of Two Matrix :- 
9 16 21
24 25 24
21 16 9

*/