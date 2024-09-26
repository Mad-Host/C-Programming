// WAP to reverse the String.

#include<stdio.h>

int main()
{
    char name[20];
    int i;

    printf("Enter Your Name : ");
    fgets(name, 20, stdin);

    for(i=0; name[i]; i++);
    name[i-1] = '\0';

    printf("Response %s Now, The Reverse String is : ",name);

    for(int j=i-2; j != -1; j--)
        printf("%c",name[j]);

    printf("\n");
    return 0;
}

/*

Enter Your Name : Hi, Developer.   
Response Hi, Developer. Now, The Reverse String is : .repoleveD ,iH

*/


