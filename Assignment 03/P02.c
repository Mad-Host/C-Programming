// WAP to calculate sizeof character constant.

#include<stdio.h>

int main() {
    
    char ch;
    
    printf("Enter Your character constant : ");
    scanf("%c",&ch);
    printf("Your character constant is \'%c\' and the sizeof character constant is : %d Byte.",ch,sizeof(ch));
    

    printf("\n");
    return 0;
}


/*

Enter Your character constant : M

Your character constant is 'M' and the sizeof character constant is : 1 Byte.

*/


