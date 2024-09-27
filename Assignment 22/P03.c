// WAP to compare TWO String.

#include<stdio.h>
#include<string.h>

int main()
{

    char user_name[20], user_password[20], check_password[20];
    printf("Enter User Name : ");
    fgets(user_name, 20, stdin);

    printf("Enter Password : ");
    fgets(user_password, 20, stdin);

    printf("Enter Once again Password : ");
    fgets(check_password, 20, stdin);

    int valid = strcmp(user_password, check_password);

    if(valid == 0)
        printf("\n\nSucessfully Ragisterd!\n");
    else if(valid > 0)
        printf("User Password is Not Match!!");
    else    
        printf("Checking Password is Not Match!!!");

    if (valid == 0)
    {
        printf("Response User Name : %s", user_name);
        printf("Response User Password : %s", user_password);
    }
    printf("\n");
    return 0;
}


// Enter User Name : Mad-Host
// Enter Password : madHost
// Enter Once again Password : madHost

// Sucessfully Ragisterd!

// Response User Name : Mad-Host
// Response User Password : madHost
