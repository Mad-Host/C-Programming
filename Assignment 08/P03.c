// WAP to print first N even numbers in reverse order.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=num; i>=1; i--){
        printf("%d\n",2*i);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 10
20
18
16
14
12
10
8
6
4
2

*/