// WAP which takes month as number display numbers of days in that month.

#include<stdio.h>

int main() {
    
    int month;
    
    printf("Enter Month Number : ");
    scanf("%d",&month);
    
    if( month == 1 && month == 3 && month == 5 && month == 7 && month == 8 && month == 10 && month == 12) {
        printf("31 Days");
    }
    else if(month == 4 && month == 6 && month == 9 && month == 11) {
        printf("30 Days.");
    } 
    else {
        printf("29 / 28 Days.");
    }
    
    
    printf("\n");
    return 0;
}


/*

Enter Month Number : 2

29 / 28 Days.

*/