// WAP to enter Natural Numbers.

#include<stdio.h>

int main() {
    
    int n, i = 1;
    
    printf("Enter Your Number : ");
    scanf("%d",&n);
    
    
    while(i <= n) {
        printf("%d ",i);
        i++;
    }
    
    printf("\n");
    return 0;
}


// output :
// Enter Your Number : 20
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 