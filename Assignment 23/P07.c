// WAP to find word in a given string.

#include<stdio.h>
#include<string.h>

int main()
{
    char text[60];
    printf("Type Something : ");
    fgets(text, 60, stdin);
    text[strlen(text) - 1] = '\0';

    char find[10];
    printf("Find a Word : ");
    fgets(find, 10, stdin);
    find[strlen(find) - 1] = '\0';

    printf("Response %s String Contains : %s",text,strstr(text, find));

    printf("\n");
    return 0;
}

/*

Type Something : The rain in Spain falls mainly on the plains
Find a Word : rain
Response The rain in Spain falls mainly on the plains String Contains : rain in Spain falls mainly on the plains

*/
