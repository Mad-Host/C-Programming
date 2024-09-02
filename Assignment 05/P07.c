// WAP to check the leap year or not.

#include<stdio.h>

int main() {

   int year;

    printf("Enter Year : ");
    scanf("%d",&year);

    year%4 ? printf("%d is Not Leap Year",year) : printf("%d is Leap Year",year);
    
    
    printf("\n");
    return 0;
}


/*

Enter Year : 2021

2021 is Not Leap Year


*/