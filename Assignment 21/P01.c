// WAP to Calculate the length of string. ( without using built in function.)

#include<stdio.h>

int main()
{

    // Taking input string from user.
    char arr[20];
    int i;
    printf("Enter Your City : ");
    fgets(arr,20,stdin);

    // Calculating the length of String.
    for(i=0; arr[i]; i++);
    arr[i-1] = '\0';
    printf("The length of %s is %d",arr,i-1);


    printf("\n");
    return 0;
}

/*

Enter Your City : PARBHANI, MH
The length of PARBHANI, MH is 12

*/

