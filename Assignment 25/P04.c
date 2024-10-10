// WAP to print given string into uppercase.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

void display(char *);
void uppercase(char *);

int main()
{

    char str[20];


    printf("\n// BUG : THIS PROGRAM ONLY TAKES LOWERCASE LETTES ONLY!, DON'T TYPE ANY UPPERCASE LETTER!\n\n");
    printf("Type Something : ");
    fgets(str, 40, stdin);
    str[strlen(str) - 1] = '\0';

    uppercase(str);
    display(str);

    printf("\n");
    return 0;
}

void uppercase(char *p)
{
    for(int i=0; *(p+i); i++)
    {
        *(p+i) = toupper(*(p+i));
    }
}

void display(char *p)
{
    printf("\nNow, The Case of String is : ");
    for(int i=0; *(p+i); i++)
    {
        printf("%c",*(p+i));
    }
}

/*

// BUG : THIS PROGRAM ONLY TAKES LOWERCASE LETTES ONLY!, DON'T TYPE ANY UPPERCASE LETTER!

Type Something : Hi, developers what you doing?

Now, The Case of String is : HI, DEVELOPERS WHAT YOU DOING?

*/
