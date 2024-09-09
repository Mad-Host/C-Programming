
#include <stdio.h>

void input(int[], int);

int main() {
    
    // Array declaration.
    int a[5];
    input(a,5);
    
    for(int i=0; i<5; i++)
        printf("%d ",a[i]);
    
    printf("\n");
    return 0;
}

void input(int b[], int n)
{
    printf("Enter %d Numbers : ",n);
    for(int i=0; i<n; i++)
        scanf("%d",&b[i]);
}


/*

Enter 5 Numbers : 10 75 54 65 58

10 75 54 65 58  

*/