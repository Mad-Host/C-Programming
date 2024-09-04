// WAP to add first N numbers square additions.

#include<stdio.h>

int main() {
    
    int num,sum = 0;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d\n", i*i);
        sum = sum + i*i;
    }

    printf("The sum of first N Number is : %d", sum);

    printf("\n");
    return 0;
}


/*

Enter Number  : 10

1
4
9
16
25
36
49
64
81
100
The sum of first N Number is : 385

*/