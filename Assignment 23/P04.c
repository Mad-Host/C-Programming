// WAP to reverse the string in word vise.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

    char text[60];
    int count = 0;

    printf("Enter Your Name : ");
    fgets(text, 60, stdin);
    text[strlen(text) - 1] = '\0';

    for(int i=0; text[i]; i++)
    {
        if(text[i] == ' ')
            count++;
    }

    printf("Response : %s",text);
    printf("The count is : %d",count);
    printf("\n");
    return 0;
}

