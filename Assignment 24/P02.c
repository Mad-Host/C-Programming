// WAP to take input from user and find the vowels in the strings. Array should be 2D Array.

#include<stdio.h>
#include<string.h>

void check_vowels(char [][20]);
void display(char [][20]);

int main()
{

    char name[5][20];
    
    printf("Type Something!\n");
    for(int i=0; i<5; i++)
    {
        printf("Enter %d String : ",i+1);
        fgets(name[i], 20, stdin);
        name[i][strlen(name[i]) -1 ] = '\0';
    }
    check_vowels(name);
    // display(name);

    printf("\0");
    return 0;
}

void display(char name[][20])
{
    for(int i=0; i<5; i++)
    {
        printf("String %d : %s",i+1, name[i]);
    }
}

void check_vowels(char name[][20])
{
    int count = 0;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<=strlen(name[i]); j++)
        {
            if(name[i][j] == 'a' || name[i][j] == 'e' || name[i][j] == 'i' || name[i][j] == 'o' || name[i][j] == 'u' || name[i][j] == 'A' || name[i][j] == 'E' || name[i][j] == 'I' || name[i][j] == 'O' || name[i][j] == 'U')
                count++;
        }
        printf("String %d Contains %d vowels.\n",i+1,count);
        count = 0;
    }

    
}


/*


Type Something!
Enter 0 String : hello
Enter 1 String : bro
Enter 2 String : how
Enter 3 String : are 
Enter 4 String : you 
String 1 Contains 2 vowels.
String 2 Contains 1 vowels.
String 3 Contains 1 vowels.
String 4 Contains 2 vowels.
String 5 Contains 2 vowels.


*/

