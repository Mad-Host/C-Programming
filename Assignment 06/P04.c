// WAP to check given input is uppercase or lowercase.

#include<stdio.h>

int main() {
    
    char input;
    
    printf("Enter Your Character : ");
    scanf("%c",&input);
    
    if(input > 'A' && input < 'Z') {
        printf("%c is Uppercase",input);
    }
    else if(input > 'a' && input < 'z') {
        printf("%c is lowercase",input);
    } 
    else {
        printf("Special Character.");
    }
    
    
    printf("\n");
    return 0;
}

/*

Enter Your Character : g

g is lowercase

*/
