// WAP to take input from user and then find the character occurance in the given string.

#include<stdio.h>

int main()
{
    // Taking string from user.
    char name[20], check; 
    int count = 0,i;
    printf("Enter Your Name : ");
    fgets(name,20,stdin);

    // Taking character from user & search into the string.
    printf("Enter Single Character you want to search : ");
    scanf("%c",&check);

    for(i=0; name[i]; i++)
    {
        if(check == name[i])
            count++;
    }

    name[i-1] = '\0';
    printf("Your Response %s and you search of occurance of %c is : %d",name,check,count);

    printf("\n");
    return 0;
}

/*

Enter Your Name : PARBHANI MH
Enter Single Character you want to search : A
Your Response PARBHANI MH and you search of occurance of A is : 2

*/

