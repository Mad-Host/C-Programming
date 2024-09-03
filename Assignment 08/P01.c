// WAP to print first N odd numbers.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n",2*i-1);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 10
1
3
5
7
9
11
13
15
17
19

*/