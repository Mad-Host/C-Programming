
#include <stdio.h>

int main() {
 
    int num;
    
    printf("Enter Number (1 To 3 ) : ");
    scanf("%d",&num);
    
    switch(num){
        case 1: 
            printf("Good");
            break;
            
        case 2: 
            printf("Better");
            break;
            
        case 3:
            printf("Best");
            break;
        
        default:
            printf("Invalid");
    }
 
 
 
    printf("\n");
    return 0;
}

/*

Enter Number (1 To 3 ) : 4

Invalid


*/

