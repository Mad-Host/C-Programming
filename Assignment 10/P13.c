// WAP to print all Armstrong Numbers under 1000.

#include<stdio.h>

int main() 
{

    int num,numVal,temp = 0,j,i=1,count = 0;
    
    printf("All Armstrong Numbers Under (Max: 10000) : ");
    scanf("%d",&num);
    
    if(num<=0 || num>10000){
        printf("Enter a Valid Number!");
    } else {
        
        while(i<=num)
    {
        if(i<=9)
        {
            printf("%d ",i);
            count++;
        }
        
        if(i>=10 && i<=99) 
        {
        j = i;
        while(1)
        {
            numVal = j%10;
            temp = temp + (numVal * numVal);
            j = j/10;
            
            if(temp == i && j == 0){
                temp = 0;
                printf("%d ",i);
                count++;
                break;
            }
            
            if(j == 0){
                temp = 0;
                break;
            }
        }
        }
        
        if(i>=100 && i<=999)
        {
            j = i;
        while(1)
        {
            numVal = j%10;
            temp = temp + (numVal * numVal * numVal);
            j = j/10;
            
            if(temp == i && j == 0){
                printf("%d ",i);
                count++;
                break;
            }
            
            if(j == 0)
            {   
                temp = 0;
                break;
            }

            
        }
        
        }
        
        if(i>=1000 && i<=9999)
        {
            j = i;
        while(1)
        {
            numVal = j%10;
            temp = temp + (numVal * numVal * numVal * numVal);
            j = j/10;
            
            if(temp == i && j == 0){
                printf("%d ",i);
                count++;
                break;
            }
            
            if(j == 0)
            {   
                temp = 0;
                break;
            }

            
        }
        
        }
     
        i++;
    }


    printf("\nTotal Count for Armstrong Number is : %d",count);
    }

    
    printf("\n");
    return 0;
    
}



/*

All Armstrong Numbers Under (Max: 10000) : 10000

1 2 3 4 5 6 7 8 9 153 370 407 1634 8208 9474 

Total Count for Armstrong Number is : 15

*/

