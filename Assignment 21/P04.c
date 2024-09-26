// WAP to count spaces in the string.

#include<stdio.h>

int main()
{
    char mystr[40];
    int i,count = 0;

    printf("Enter Your String (40) : ");
    fgets(mystr,40,stdin);

    for(i=0; mystr[i]; i++)
    {
        if(mystr[i] == ' ')
            count++;
    }

    mystr[i-1] = '\0';
    printf("Response %s contains %d spaces.",mystr,count);

    printf("\n");
    return 0;
}

/*

Enter Your String (40) : So, What am i doing??? 
Response So, What am i doing??? contains 4 spaces.

*/
