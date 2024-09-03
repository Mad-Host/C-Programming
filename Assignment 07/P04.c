// WAP to print mySirG 5 times.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number of Times : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n",i);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number of Times : 10
1
2
3
4
5
6
7
8
9
10

*/