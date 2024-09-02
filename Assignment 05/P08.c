// WAP to check Greater Number in 3 Numbers.

#include<stdio.h>

int main() {

   int a,b,c;

    printf("Enter Three Numbers : ");
    scanf("%d %d %d",&a,&b,&c);

    if(a>b && a>c) {
        printf("First Number %d is Greatest!",a);
    } 
    else if(b > c) {
        printf("Second Number %d is Greatest!",b);
    } 
    else {
        printf("Last Number %d is Greatest!",c);
    }
    
    
    printf("\n");
    return 0;
}

/*

Enter Three Numbers : 10 25 101

Last Number 101 is Greatest!

*/