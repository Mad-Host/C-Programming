// WAP to make an acronym name from a given name. for Example Ramesh Chand Tiwarri become R C Tiwari.

#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{

    char type[60];
    int count = 0, space = 0;

    printf("Type something : ");
    fgets(type, 60, stdin);
    type[strlen(type) - 1] = '\0';




    for(int i=0; type[i]; i++)
    {
        if(type[i] == ' ')
            space++;
    }
    
    printf("Your Response : ");
    for(int i=0; type[i]; i++)
    {
        if(i == 0)
            printf("%c",toupper(type[i]));

        if(type[i] == ' ')
        {
            printf("%c%c",type[i],toupper(type[i+1]));
            count++;
        }

        if(count == space)
            printf("%c",type[i]);

    }

    printf("\n");
    return 0;
}


