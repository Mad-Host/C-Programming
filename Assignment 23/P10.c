// WAP a function to concatenate two strings.

#include<stdio.h>
#include<string.h>

int main()
{

    char first_name[20];
    char last_name[20];

    printf("Enter First Name : ");
    fgets(first_name, 20, stdin);
    first_name[strlen(first_name) - 1] = '\0';

    printf("Enter Last Name : ");
    fgets(last_name, 20, stdin);
    last_name[strlen(last_name) - 1] = '\0';

    // concatenate the Two String.

    strcat(first_name, last_name);
    printf("Your First Name and Last name is : %s",first_name);

    printf("\n");
    return 0;
}


/*

Enter First Name : MAD
Enter Last Name : HOSTY
Your First Name and Last name is : MADHOSTY

*/
