// WAP to store each word in 2D Array String.

#include<stdio.h>
#include<string.h>

int count_spaces(char[40]);
void remove_spaces(char[40]);
void display(char [][40], int);

int main()
{
    char text[40];
    printf("Type something : ");
    fgets(text, 40, stdin);
    text[strlen(text) - 1] = '\0';

    printf("Response : %s\n\n",text);
    // remove unwanted spaces from string.
    remove_spaces(text);

    char new_text[count_spaces(text) + 1][40];

    int j=0, k = 0;
    for(int i=0; i<strlen(text); i++)
    {
        if(text[i] != ' ' && text[i] != '\0')
        {
            new_text[j][k] = text[i];
            k++;
        }
        else
        {
            new_text[j][k] = '\0';
            j++;
            k = 0;
        }
    }

    // Displying 2D Array.
    display(new_text,count_spaces(text) + 1);

    printf("\n");
    return 0;
}

int count_spaces(char text[40])
{
    int count = 0;
    for(int i=0; text[i]; i++)
    {
        if(text[i] == ' ')
            count++;
    }
    return count;

}

void remove_spaces(char text[40])
{
    for(int i=0; text[i]; i++)
    {
        if(text[i] == ' ' && text[i+1] == ' ')
        {
            text[i] = '\0';
        }
    }
}

void display(char text[][40], int count)
{
    printf("So, 2D String is : { ");
    for(int i=0; i<count; i++)
    {
        printf("%s, ",text[i]);
    }
    printf(" }");
}

/*

Type something : GOA IS GOOD PLACE TO ENJOY & hmm
Response : GOA IS GOOD PLACE TO ENJOY & hmm

So, 2D String is : { GOA, IS, GOOD, PLACE, TO, ENJOY, &, hmm,  }

*/

