// WAP to check weather a given string is an alpanumric string or not. (Alphanumeric string must contain at least one alphabet and one digit.)

#include<stdio.h>
#include<string.h>

int main()
{

    char arr[40];
    int i,count = 0, string = 0;
    printf("Your Name : ");
    fgets(arr, 40, stdin);
    arr[strlen(arr) - 1] = '\0';

    for(i=0; arr[i]; i++)
    {
        if(arr[i]>=48 && arr[i]<=57)
            count++;
        else if(arr[i]>=65 && arr[i]<=90)
            string++;
        else if(arr[i]>=97 && arr[i]<=122)
            string++;
    }

    if(count>0 && string>0)
        printf("%s is an Alphanumeric String!",arr);
    else    
        printf("%s in Not an Alphanumeric String!",arr);

    printf("\n");
    return 0;
}

/*

Your Name : PARBHANI, MAHARASTRA.
PARBHANI, MAHARASTRA. in Not an Alphanumeric String!

Your Name : MAD-HOST123
MAD-HOST123 is an Alphanumeric String!

*/

