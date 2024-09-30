// WAP to make each first character capital in string.

#include<stdio.h>
#include<string.h>

int main()
{

    char text[60];
    printf("Type Something : ");
    fgets(text, 60, stdin);
    text[strlen(text) - 1] = '\0';

    for(int i=0; text[i]; i++)
    {
        if(i == 0 && text[i]>=97)
        {
            text[i] = text[i] - 32;
        }

        if(text[i] == ' ' && text[i+1]>=97)
        {
            text[i+1] = text[i+1] - 32;
        }

    }

    printf("Response : %s",text);

    printf("\n");
    return 0;
}


/*

Type Something : Hi, developers! what are you doing??
Response : Hi, Developers! What Are You Doing??

*/


