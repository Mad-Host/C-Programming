// WAP to sort the int array using pointers.

#include<stdio.h>

void sort(int *, int);

int main()
{

    int arr[10];

    printf("\nEnter 10 Numbers : ");
    for(int i=0; i<10; i++)
        scanf("%d",&arr[i]);

    sort(arr, 10);
    
    printf("The Sorted Array is : ");
    for(int i=0; i<10; i++)
        printf("%d ",arr[i]);

    printf("\n");
    return 0;
}

void sort(int *p, int size)
{
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
        if(j == size)
            break;

        if(*(p+i) > *(p+j))
        {
            int temp = *(p+i);
            *(p+i) = *(p+j);
            *(p+j) = temp;
        }

        }
    }
}



/*

OUTPUT : 

Enter 10 Numbers : 50 68 154 10 74 12 10 56 48 10  
The Sorted Array is : 10 10 10 12 48 50 56 68 74 154 

*/