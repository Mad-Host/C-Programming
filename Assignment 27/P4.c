// WAP to calculate sum of n numbers input by user using maclloc & free.


#include<stdio.h>
#include<stdlib.h>


void inputNum(int *, int);
int calSum(int *, int);

int main()
{

    int val;
    int *ptr;

    printf("\n// Note : This program print sum of N numbers of Data! \n\n");
    printf("How many Numbers of Data You want to add ? \n");
    printf("Response : ");
    scanf("%d",&val);

    if(val > 0 && val != 1)
    {
        ptr = (int *)malloc(val * sizeof(int));

        // To check Null Pointer.

        if (ptr == NULL)
        {
            printf("Null Pointer Exceptional Memory is Not Allocated!");
            exit(0);
        }
        else
        {
            printf("Memeroy is Successfully Allocated !\n");

            inputNum(ptr, val);
            printf("The Sum of %d Numbers is : %d", val, calSum(ptr, val));
        }
    }
    else 
    {
        printf("The Sum of N Number is : 1\n");
    }
    
    free(ptr);
    printf("\n\n === END OF PROGRAM === \n");
    return 0;
}

void inputNum(int *p, int size)
{
    printf("\nNow, Enter The %d Numbers !\n",size);
    for(int i=0; i<size; i++)
    {
        printf("Enter %d Number : ",i+1);
        scanf("%d",p+i);
    }
}

int calSum(int *p, int size)
{
    int sum = 0;
    for(int i=0; i<size; i++)
    {
        sum = sum + *(p+i);
    }

    return sum;
}

/*

OUTPUT : 

// Note : This program print sum of N numbers of Data! 

How many Numbers of Data You want to add ? 
Response : 7
Memeroy is Successfully Allocated !

Now, Enter The 7 Numbers !
Enter 1 Number : 7
Enter 2 Number : 6
Enter 3 Number : 6
Enter 4 Number : 6
Enter 5 Number : 8
Enter 6 Number : 9
Enter 7 Number : 5
The Sum of 7 Numbers is : 47

 === END OF PROGRAM === 

*/

