// WAP to print the first N Odd numbers additions.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n", 2*i-1);
        sum = sum + 2*i-1;
    }
    
    printf("The sum of first N Number is : %d", sum);

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
The sum of first N Number is : 100

*/