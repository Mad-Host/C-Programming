// All the prime numbers between two given numbers.

#include<stdio.h>

int main() 
{
    
    int num,val=1,count = 0,i,j,lastNum,primeCount = 0;
    
    printf("All Prime Numbers Between Two Numbers : ");
    scanf("%d %d",&num,&lastNum);
    
    for(i=num; i<=lastNum; i++)
    {
        if(i == 1){
            i++;
        }
        
        for(j=2; j<i; j++)
        {
            if(i%j == 0){
            count++;
            }
        }
        
        if(count<=0){
        printf("%d ",i);
        primeCount++;
        }else {
            count = 0;
        }
        
        
    }
    
    printf("\nTotal No of Primes between Numbers are : %d\n",primeCount);
    
    printf("\n");
    return 0;
}

/*

All Prime Numbers Between Two Numbers : 1 200

2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97 101 103 107 109 113 127 131 137 139 149 151 157 163 167 173 179 181 191 193 197 199 
Total No of Primes between Numbers are : 46

*/


