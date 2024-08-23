// WAP to take the Time in given format and convert to specifyed format.

#include<stdio.h>

int main() {
    
    int H,M;
    
    printf("Enter Current Time (\"HH:MM\") : " );
    scanf("\"%d:%d\"",&H,&M);
    
    printf("%d Hour and %d Minutes!",H,M);
   
    printf("\n");
    return 0;
}

/*

Enter Current Time ("HH:MM") : "12:40"

12 Hour and 40 Minutes!


=== Code Execution Successful ===

*/