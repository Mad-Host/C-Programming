// WAP to take input from one String & copy into another string.

#include<stdio.h>

int main()
{

    char arr[20];
    int i;
    printf("Enter 1st Array : ");
    fgets(arr,20,stdin);

    for(i=0; arr[i]; i++);
    arr[i-1] = '\0';

    char brr[20] = {0};
    for(int j=0; j<i-1; j++)
        brr[j] = arr[j];

    printf("Original Array is : %s\n",arr);
    printf("Copy Array is : %s",brr);


    printf("\n");
    return 0;
}

/*

Enter 1st Array : Goa
Original Array is : Goa
Copy Array is : Goa

*/
