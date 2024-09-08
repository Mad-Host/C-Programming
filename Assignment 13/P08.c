// WAP to check weather a given character is uppercase alphabet or lowercase alphabet or some other special character, using switch case statement.

#include <stdio.h>

int main() {
    
    char val;
    
    printf("Enter the Character : ");
    scanf("%c",&val);
    
    switch(val)
    {
        case 'A' ... 'Z':
            printf("%c is uppercase alphabet.",val);
            break;
        
        case 'a' ... 'z':
            printf("%c is lowercase alphabet.",val);    
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