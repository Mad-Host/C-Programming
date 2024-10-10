// WAP to calculate the length of String passing through function.

#include<stdio.h>
#include<string.h>

int length(char *, int);

int main()
{

    char str[20];
    printf("Enter Name : ");
    fgets(str, 20, stdin);

    int l = length(str, strlen(str));

    printf("The length of String is : %d",l);


    printf("\n");
    return 0;
}


int length(char *p, int size)
{   
    int i;
    for(i=0; *(p+i); i++);
    return i;
}




