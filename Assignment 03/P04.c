// use increment operator to change A to B.

#include<stdio.h>

int main() {
    
    char ch;
    
    printf("Enter Your character constant : ");
    scanf("%c",&ch);
    printf("Before \'%c\' \n",ch);
    ch++;
    printf("After increment : %c",ch);
    

    printf("\n");
    return 0;
}


/*

Enter Your character constant : A
Before 'A' 
After increment : B

*/


