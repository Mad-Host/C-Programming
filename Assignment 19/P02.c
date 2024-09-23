// WAP to print first occurance of duplicate value in Array using function and function has to return the element.


#include<stdio.h>

void input(int[], int);
int duplicate(int[], int);

int main()
{
    int size;

    printf("Enter Array size : ");
    scanf("%d",&size);

    int arr[size];

    input(arr, size);
    printf("%d Number is Adjacent duplicate",duplicate(arr,size));


    printf("\n");
    return 0;
}

void input(int arr[], int size)
{
    printf("Enter %d Numbers : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

int duplicate(int arr[], int size)
{
    for(int i=0; i<size; i++)
    {
        if(arr[i] == arr[i+1])
            return arr[i];
            
    }
    return 0;
}

/*

Enter Array size : 10
Enter 10 Numbers : 110 20 30 40 50 50 60 70 80 121 
50 Number is Adjacent duplicate

*/