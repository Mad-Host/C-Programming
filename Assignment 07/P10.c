// WAP to print cube of first 10 natural number.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=num; i>=1; i = i - 2){
        printf("%d\n",i);
    }
    

    printf("\n");
    return 0;
}


/*

Enter Number  : 20
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