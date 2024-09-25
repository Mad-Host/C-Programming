// WAP for 4 players which is playing chess with a round robin method. Each win has two points draw has 1 point and lose has 0 point perepare a bord chart to store the scores of players in each players againsest.

#include<stdio.h>

void display(int [][4], int size);

int main()
{
    // Creating chess borad.
    int chess_bord[4][4];
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(i == j)
                chess_bord[i][j] = '-';
            else
            {
                printf("P%d --> P%d : ",i,j);
                scanf("%d",&chess_bord[i][j]);
            }
        }
    }
    display(chess_bord,4);

    printf("\n");
    return 0;
}

void display(int arr[][4],int size)
{
    printf("\n --- CHESS SOTRE BOARD ---\n");
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if(i == j)
                printf("%c ",arr[i][j]);
            else
                printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

/*

P0 --> P1 : 2
P0 --> P2 : 1
P0 --> P3 : 2
P1 --> P0 : 0
P1 --> P2 : 1
P1 --> P3 : 0
P2 --> P0 : 1
P2 --> P1 : 1
P2 --> P3 : 0
P3 --> P0 : 0
P3 --> P1 : 2
P3 --> P2 : 2

 --- CHESS SOTRE BOARD ---
- 2 1 2 
0 - 1 0 
1 1 - 0 
0 2 2 - 

*/






