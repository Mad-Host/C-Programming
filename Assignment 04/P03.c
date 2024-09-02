// WAP to printf sizeof int, char, float and double.

#include<stdio.h>

int main() {
    
    int x;
    float fs;
    double ds;
    char ch;
    
    printf("Enter anyone int, float, double and character value : ");
    scanf("%d, %f, %lf, %c",&x,&fs,&ds,&ch);
    
    printf("Sizeof(%d) is : %d, sizeof(%f) is : %d, sizeof(%lf) is : %d and sizeof(%c) is : %d",x,sizeof(x),fs,sizeof(fs),ds,sizeof(ds),ch,sizeof(ch));
    
    printf("\n");
    return 0;
}


/*

Enter anyone int, float, double and character value : 542, 3.14, 3.14000, +

Sizeof(542) is : 4, sizeof(3.140000) is : 4, sizeof(3.140000) is : 8 and sizeof(+) is : 1

*/



