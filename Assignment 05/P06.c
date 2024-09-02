// WAP to print greater number between two numbers.

#include<stdio.h>

int main() {

   int x,y;

    printf("Enter your Numbers : ");
    scanf("%d %d",&x,&y);

    x > y ? printf("%d is greater",x) : printf("%d is greater",y);
    
    
    printf("\n");
    return 0;
}

/*

Enter your Numbers : 20 10

20 is greater


*/