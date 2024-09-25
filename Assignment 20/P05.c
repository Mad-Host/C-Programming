// WAP for 4 players which is playing chess with a round robin method. Each win has two points draw has 1 point and lose has 0 point perepare a bord chart to store the scores of players in each players againsest.

#include<stdio.h>

void display(int [][4], int size);
void score_board(int [][4], int size, int, int);

int main()
{
    int p1,p2;
    int chess_bord[4][4] = {0};
    printf("1st Player vs 2nd Player (1 Vs 2) : ");
    scanf("%d Vs %d",&p1,&p2);

    score_board(chess_bord, 4,p1,p2);
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
                printf("%d ",arr[i][j]);
        printf("\n");
    }
}

void score_board(int arr[][4], int size, int p1, int p2)
{
    int result;
    printf("\n --- RULES --- \n");
    printf("LOSS --> 0, DRAW -->1, WIN -->2\n");
    printf("NOw, Tell me about Result : ");
    scanf("%d",&result);
    if(p1 == p2)
        arr[p1][p2] = '-';
    else
        arr[p1][p2] = result;
}







