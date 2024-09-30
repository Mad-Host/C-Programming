// WAP to count the word in string.

#include<stdio.h>
#include<string.h>

int main()
{

    char text[40];
    int count = 1;

    printf("Type something : ");
    fgets(text, 40, stdin);
    text[strlen(text) - 1] = '\0';

    for(int i=0; text[i]; i++)
    {
        if(text[i] == ' ')
            count++;
    }

    printf("Response : %s\n",text);
    printf("Total No of Words are : %d",count);

    printf("\n");
    return 0;
}

/*

Type something : Hi, Developers what's you doing??
Response : Hi, Developers what's you doing??
Total No of Words are : 5

*/