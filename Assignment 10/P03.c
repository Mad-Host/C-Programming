// WAP to print the table of any Number without using any loop.

#include<stdio.h>
#include<stdlib.h>

int main() {
    
    int n,i = 1;
    
    printf("Enter Your Number : ");
    scanf("%d",&n);
    
    l1: printf("%d * %d = %d\n",n,i,n*i);
    i++;
    
    if(i<=10){
        goto l1;
    }
    
    printf("End of Program!");
    
    printf("\n");
    return 0;
}

/*

Enter Your Number : 5
5 * 1 = 5
5 * 2 = 10
5 * 3 = 15
5 * 4 = 20
5 * 5 = 25
5 * 6 = 30
5 * 7 = 35
5 * 8 = 40
5 * 9 = 45
5 * 10 = 50
End of Program!

*/

