// WAP to check weather a given character is uppercase alphabet or lowercase alphabet or some other special character, using switch case statement.

#include <stdio.h>

int main() {
    
    char val;
    
    printf("Enter the Character : ");
    scanf("%c",&val);
    
    switch(val)
    {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf("%c is an Vowel",val);
            break;
        
        case '1' ... '9':
            printf("%c is Constant",val);    
            break;
            
        default:
            printf("%c is special case character",val);
    }
    
    printf("\n");
    return 0;
}

/*

Enter the Character : @

@ is special case character

*/

