// Strings and functions.
// WAP to calculate the length of string.

#include<stdio.h>
#include<string.h>

int main()
{
    char name[20];
    printf("Enter Your Name :");
    fgets(name,20,stdin);

    name[strlen(name)-1] = '\0';
    
    printf("The lenght of %s is : %d",name,strlen(name));

    printf("\n");
    return 0;
}

/*

Enter Your Name :MadHost
The lenght of MadHost is : 7

*/


