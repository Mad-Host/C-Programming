// WAP to swap two character of given string with specified indices.

#include<stdio.h>
#include<string.h>

int main()
{

    char name[20], a,b;
    int indexa, indexb;

    printf("Enter Your Name : ");
    fgets(name, 20, stdin);
    name[strlen(name) - 1] = '\0';
    printf("Response : %s",name);
    printf("(index:character) : ");
    scanf("%d:%c %d:%c",&indexa, &a, &indexb, &b);

    name[indexa] = a;
    name[indexb] = b;

    printf("Submitted Response : %s",name);

    printf("\n");
    return 0;
}

/*

Enter Your Name : Your Name Web
Response : Your Name Web(index:character) : 0:y 4:n
Submitted Response : yournName Web

*/

