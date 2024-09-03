// WAP to print cube of first 10 natural number.

#include<stdio.h>

int main() {
    
    int num;
    
    printf("Enter Number  : ");
    scanf("%d",&num);
    
    for(int i=1; i<=num; i++){
        printf("%d : %d\n",i,i*i*i);
    }
    

    printf("\n");
    return 0;
}

/*

Enter Number  : 10
1 : 1
2 : 8
3 : 27
4 : 64
5 : 125
6 : 216
7 : 343
8 : 512
9 : 729
10 : 1000



*/
