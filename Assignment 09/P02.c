// WAP to print the first N Even numbers additions.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n", 2*i);
        sum = sum + 2*i;
    }
    
    printf("The sum of first N Number is : %d", sum);

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
The sum of first N Number is : 110


*/