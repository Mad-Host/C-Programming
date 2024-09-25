// WAP for 4 players which is playing chess with a round robin method. Each win has two points draw has 1 point and lose has 0 point perepare a bord chart to store the scores of players in each players againsest.

// 01. Update the score_board
// 02. Display the score_board
// 03. Return the specific player score.
// 04. Find the winner of the tournament.
// 05. Display the Rank of the player.
// 06. Define a function which start the tournament in which user has to enter the result of each game and update the score board using score board function.

#include<stdio.h>
#include<stdlib.h>

void display(int [][4], int);
void update_score(int [][4], int, int, int);
void player_score(int [][4], int, int);
void check_winner(int [][4], int);
void restart(int[][4], int);
void rank(int[][4], int);

int main()
{
    // Taking No. of Players.
    // int players = 4;
    // printf("Enter No. of Players : ");
    // scanf("%d",&players);

    int score_board[4][4] = {0};
    int val,choice,p1,p2,result,player;

    printf("\nDo you want to start a tournament (Yes:1 & No: 0) : ");
    scanf("%d",&val);

    printf("\nNOTE : THIS PROGRAM ONLY WORKS FOR 4 PLAYERS! \n");

    if(val == 1)
    {
        while (1)
        {
            // Printing the socre borad.
            printf("\n--- SCORE BOARD ---\n");
            printf("01. Update the score_board\n");
            printf("02. Display the score_board\n");
            printf("03. Return the specific player score.\n");
            printf("04. Find the winner of the tournament.\n");
            printf("05. Display the Rank of the player.\n");
            printf("06. Restart\n");
            printf("07. Exit.\n");
            printf("Press your Choice : ");
            scanf("%d",&choice);

            // Calling Each function using switch.
            switch (choice)
            {
            case 1:
                printf("Tell me, who is in match (1 vs 4) : ");
                scanf("%d vs %d",&p1,&p2);
                printf("\n --- RULES OF GIVING POINTS ---\n\n");
                printf("*** WIN --> 2\n*** LOSS --> 0\n*** DRAW --> 1\n\n");
                printf("Now, Give Player %d Points : ",p1);
                scanf("%d",&result);
                if (p1 == p2 || p1 > 4 || p2 > 4 || p1 < 1 || p2 < 1 || result < 0 || result > 3)
                {
                    printf("This opertation Could not perform!!\n\n");
                    break;
                }
                else 
                    update_score(score_board,p1, p2,result);
                break;

            case 2:
                display(score_board, 4);
                break;

            case 3:
                printf("\nWhich Player Score you want to see ? : ");
                scanf("%d",&player);
                if (player >= 5 || player < 1)
                {
                    printf("\nInvalid Player!!!\n\n");
                    break;
                }
                else
                    player_score(score_board, 4, player);

            case 4:
                check_winner(score_board, 4);
                break;
            
            case 5:
                rank(score_board, 4);
                break;

            case 6:
                restart(score_board, 4);
                break;

            case 7:
                exit(0);

            default:
                printf("\nChose correct Option!");
            }
        }
    }
    else
        printf("\n--- Ending of Program! --- \n");

    printf("\n");
    return 0;
}

void display(int arr[][4], int size)
{
    printf("\n\t   *** DISPLAY SCORE BOARD ***\n\n");
    for(int i=-1; i<size; i++)
    {
        if(i>-1)
            printf("Player %d \t",i+1);
        for(int j=0; j<size; j++)
        {
            if(i>-1)
            {
            if(i == j)
                printf("%c \t",'-');
            else
                printf("%d \t",arr[i][j]);
            }
            else if(j==0)
                    printf("\t\tP%d",j+1);
            else
                    printf("\tP%d",j+1);
            
        }
        printf("\n\n");
    }

    printf("\n\t\t------ END -----\n\n");
}

void update_score(int arr[][4], int p1, int p2, int result)
{
    arr[p1-1][p2-1] = result;
}

void player_score(int arr[][4], int size, int player)
{
        printf("\n\t   *** DISPLAY PLAYER SCORE ***\n\n");
        printf("\n\nPlayer %d\t",player);
        for(int i=0; i<size; i++)
        {
            if(i == player-1)
                printf("%c\t",'-');
            else
                printf("%d\t",arr[player-1][i]);
        }
        printf("\n\n\t\t------ END -----\n\n");
}

void check_winner(int arr[][4], int size)
{
    int sum = 0, temp,winner;   
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            sum = sum + arr[i][j];
        }
        if (i == 0)
        {
            temp = sum;
            winner = i;
        }
        else if (temp < sum)
        {
            temp = sum;
            winner = i;
        }
    }
    printf("\n\n   ***** CONGRATULATIONS!!! ******\n****** WINNER OF TOURNAMENT IS PLAYER %d ******\n\n",winner+1);
}

void restart(int arr[][4], int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
            arr[i][j] = 0;
    }
}

void rank(int arr[][4], int size)
{
    int ranks[4] = {0};
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
            sum = sum + arr[i][j];
        ranks[i] = sum;
    }

    printf("\n ****** RANKS OF THE TOURNAMENT *****\n\n");


}


