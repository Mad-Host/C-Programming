// WAP to remove duplicates string in 2D arrays.

#include<stdio.h>
#include<string.h>

void check_duplicate(char [][20], int);
void display(char [][20], int);

int main()
{
    char list[7][20];

    // Taking input from user and stored in 2D arrays.
    printf("\nEnter 7 Words in String!\n");
    for(int i=0; i<7; i++)
    {
        printf("Enter %d String : ",i+1);
        fgets(list[i], 20, stdin);
        list[i][strlen(list[i]) - 1] = '\0';
    }
    
    check_duplicate(list, 7);
    display(list, 7);

    printf("\n");
    return 0;
}

void check_duplicate(char list[][20], int count)
{
    
    for(int i=0; i<count; i++)
    {
        for(int j=i+1; j<count; j++)
        {
            if(i == count - 1)
                break;

            if(list[i][0] == list[j][0])
            {
                int temp = strcmp(list[i], list[j]);

                if(temp == 0)
                {
                    char temp[20] = {'\0'};
                    strcpy(list[j], temp);
                }
            }

        }    
    }
}

void display(char list[][20], int count)
{
    printf("2D Array is : {");
    for(int i=0; i<count; i++)
        printf("%s ",list[i]);
    printf(" }");
}

/*

Enter 7 Words in String!
Enter 1 String : GOA
Enter 2 String : PUNE
Enter 3 String : NNP
Enter 4 String : GOA
Enter 5 String : SELU
Enter 6 String : PUNE
Enter 7 String : HYD

2D Array is : {GOA PUNE NNP  SELU  HYD  }

*/