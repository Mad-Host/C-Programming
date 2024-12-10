// WAP to take Two array from user and make one one Array after combining these two arrays use dynamic funtion calloc and malloc funtion.

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void input(int [], int);
void display(int [], int);
int* merge(int[], int[], int, int);

int main()
{

    int s1, s2;
    int *p;



    printf("\nEnter First Array Size : ");
    scanf("%d",&s1, s2);

    printf("\nEnter Second Array Size : ");
    scanf("%d",&s2);

    int arr[s1], brr[s2];

    input(arr, s1);
    input(brr, s2);
    display(arr, s1);
    display(brr, s2);


    p = merge(arr, brr, s1, s2);

    printf("\nNow, The Merge Array is : ");
    for(int i=0; i<s1+s2; i++)
        printf("%d ",*(p+i));


    printf("\n");
    return 0;
}


void input(int arr[], int size)
{
    printf("\nType %d Elements in Array : ",size);
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
}

void display(int arr[], int size)
{
    printf("\nElement in Array  : ");
    for(int i=0; i<size; i++)
        printf("%d ",arr[i]);
}

int* merge(int arr[], int brr[], int s1, int s2)
{
    int *p;
    p = (int *) calloc(s1+s2, sizeof(int));

    int j=0;
    for(int i=0; i<s1+s2; i++)
    {
        if(i<s1)
            *(p+i) = arr[i];
        else
        {
            *(p+i) = brr[j];
            j++;
        }

    }

    return p;
}


/*

OUTPUT : 


Enter First Array Size : 4

Enter Second Array Size : 3

Type 4 Elements in Array : 45 60 12 96

Type 3 Elements in Array : 12 47 56

Element in Array  : 45 60 12 96 
Element in Array  : 12 47 56 
Now, The Merge Array is : 45 60 12 96 12 47 56

*/