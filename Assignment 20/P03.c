// WAP to form a transpose of a matrix.

#include<stdio.h>

int main()
{
    // Taking arrays size from user.
    int row,col;
    printf("2D Array Size (row X col): ");
    scanf("%d X %d",&row,&col);

    // Taking value from user.
    int arr[row][col];
    for(int i=0; i<row; i++)
    {
        printf("%d row\n",i);
        for(int j=0; j<col; j++)
        {
            printf("arr[%d][%d] : ",i,j);
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }

    // Printing the Array.
    printf("\nResponse :-\n");
    for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
            printf("%d ",arr[i][j]);
        printf("\n");
    }

    printf("\n-: Transpose of Matrix is :- \n");

    // Making array to transpose.
    

    
    printf("\n");
    return 0;
}

/*

2D Array Size (row X col): 2 X 3
0 row
arr[0][0] : 1
arr[0][1] : 2
arr[0][2] : 3

1 row
arr[1][0] : 4
arr[1][1] : 5
arr[1][2] : 6


Response :-
1 2 3 
4 5 6 

-: Transpose of Matrix is :- 
1 4 
2 5 
3 6 

*/




