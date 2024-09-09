
#include <stdio.h>

int main() {

    int a[5];
    
    printf("Enter 5 Numbers : ");
    for(int i=0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for(int i=0; i<5; i++)
    {
        printf("a[%d] : %d\n",i,a[i]);
    }

    
    printf("\n");
    return 0;
}

/*

Enter 5 Numbers : 10 50 60 45 16
a[0] : 10
a[1] : 50
a[2] : 60
a[3] : 45
a[4] : 16

*/

