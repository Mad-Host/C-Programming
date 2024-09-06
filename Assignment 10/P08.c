// WAP to check wheather the given number is Armstrong Number or not.

#include<stdio.h>

int main(){
    
    int num,val,temp = 0,numVal;
    
    printf("Enter Your Number : ");
    scanf("%d",&val);
    
    num = val;
    
    for(int i=1; ; i++)
    {
        numVal = num%10;
    
        temp = temp + (numVal * numVal * numVal);
        //      0   + 3 * 3 * 3
        // printf("%d ",temp);
        
        if(num == 0) {
            break;
        }
        else {
            num = num/10;
        }
    }

    if(temp == val) {
        printf("\n%d is an Amstrong Number!!!",val);
    }
    else{
        printf("\n%d is Not a Amstrong Number!",val);
    }

    
    printf("\n");
    return 0;
}

/*

Enter Your Number : 371

371 is an Amstrong Number!!!

*/


