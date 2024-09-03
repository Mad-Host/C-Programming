// WAP to take the length of the triangle find wheather the tringle is form or not.

#include<stdio.h>

int main() {
    
    int a,b,c;
    
    printf("Enter Triangle sides  : ");
    scanf("%d %d %d",&a,&b,&c);
    
    if( a+b>c && b+c>a && c+a>b) {
        printf("Valid Triangle");
    }
    else {
        printf("Not a Valid.");
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Triangle sides  : 3 4 5

Valid Triangle

*/