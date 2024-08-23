// WAP to take the DATE and print in given format.

#include<stdio.h>

int main() {
    
    int dd,mm,yyyy;
    
    printf("Enter Todays Date (\"DD/MM/YYYY\") : " );
    scanf("%d/%d/%d",&dd,&mm,&yyyy);
    
    printf("Day - %d, Month - %d, Year - %d",dd,mm,yyyy);
   
    printf("\n");
    return 0;
}


/* 

Enter Todays Date ("DD/MM/YYYY") : 25/08/2024

Day - 25, Month - 8, Year - 2024


=== Code Execution Successful ===

*/