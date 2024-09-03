// WAP to take input from user and most three input.

#include<stdio.h>

int main() {
    
    int val,guess;
    guess = 8;

    for(int chance=1; chance<4; chance++) {
    
    printf("Enter Number : ");
    scanf("%d",&val);
        
    if(val == guess){
        printf("You Win!!!");
        break;
    }
    else {
        printf("Try again, Remining Chance %d \n",3-chance);
    }
    }
    
    printf("\n");
    printf("--- Game Over ---");
    
    
    printf("\n");
    return 0;
}


/*

Enter Number : 9
Try again, Remining Chance 2 
Enter Number : 10
Try again, Remining Chance 1 
Enter Number : 8
You Win!!!
--- Game Over ---

*/