// WAP to reverse the String.

#include<stdio.h>
#include<string.h>

int main()
{

    char name[20];
    int i, limit;
    printf("Enter Your Name : ");
    fgets(name, 20, stdin);

    name[strlen(name)-1] = '\0';  
    limit = strlen(name);

    for(int j=limit; j>=0; j--)
        printf("%c",name[j]);

    printf("\n");
    return 0;
}

/*

Enter Your Name : Hi, Developers!
!srepoleveD ,iH

*/

