// WAP to take the 10 input user email id from user and check how many email ids are having gmail.com.

#include<stdio.h>
#include<string.h>

void check_email(char [][20], char[]);

int main()
{

    char email[5][20], find[20];
    
    printf("\n\n*** Type 5 Email IDs ****\n\n");
    for(int i=0; i<5; i++)
    {
        printf("Enter %d Email id : ",i+1);
        fgets(email[i], 20, stdin);
        email[i][strlen(email[i]) - 1] = '\0';
    }

    printf("Find your text : ");
    fgets(find, 20, stdin);
    find[strlen(find) - 1] = '\0';

    check_email(email, find);



    printf("\n");
    return 0;
}

void check_email(char email[][20], char find[])
{
    for(int i=0; i<5; i++)
    {
        char* path = strstr(email[i], find);
        if(path != NULL)
            printf("%s has %s string.\n",email[i],find);
    }

}


/*

*** Type 5 Email IDs ****

Enter 1 Email id : nonamehot.com
Enter 2 Email id : noextralook.com
Enter 3 Email id : notextgmail.com
Enter 4 Email id : noextragmail.com
Enter 5 Email id : somethinup.com  
Find your text : gmail.com
notextgmail.com has gmail.com string.
noextragmail.com has gmail.com string.

*/

