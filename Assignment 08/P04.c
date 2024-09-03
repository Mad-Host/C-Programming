// WAP to print first N even numbers.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n",2*i);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 10
2
4
6
8
10
12
14
16
18
20

*/