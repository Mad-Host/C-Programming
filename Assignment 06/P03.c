// Takes input of 5 subjects and find wheater the student pass or fail.

#include<stdio.h>

int main() {

    int math, sci, his, geo, urdu;
    float result;
    
    printf("Enter Your Subjects Marks maths, science, history, geography and urdu : ");
    scanf("%d %d %d %d %d",&math,&sci,&his,&geo,&urdu);
    
    result = (math+sci+his+geo+urdu)/5;
    
    if(result > 33.00) {
        printf("Congratulations!!! %0.2f % You are Passed!!!",result);
    } 
    else {
        printf("%0.2f Try Next Year...",result);
    }    
    
    printf("\n");
    return 0;
}


/*

Enter Your Subjects Marks maths, science, history, geography and urdu : 50 12 21 20 10

22.00 Try Next Year...


*/



