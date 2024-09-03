// WAP to print square of first 10 natural number.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number of Times : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d * %d : %d\n",i,i,i*i);
    }
    

    printf("\n");
    return 0;
}

/*

Enter Number of Times : 10
1 * 1 : 1
2 * 2 : 4
3 * 3 : 9
4 * 4 : 16
5 * 5 : 25
6 * 6 : 36
7 * 7 : 49
8 * 8 : 64
9 * 9 : 81
10 * 10 : 100

*/