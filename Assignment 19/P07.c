// WAP to Count the frequency of an element in Array.

#include<stdio.h>

int check(int, int[], int);

int main()
{
    int size;
    
    // Taking Array Size.
    printf("Enter Array Size :- ");
    scanf("%d",&size);
    
    // Taking input from user and stored in Array.
    int arr[size];
    printf("Enter Numbers : ");
    for(int i=0; i<size; i++)
        scanf("%d",&arr[i]);
    
    // Now, counting the frequency of number.    
    for(int i=0; i<size; i++)
        printf("%d count in arry -> %d\n",arr[i],check(arr[i], arr, size));
    
    printf("\n");
    return 0;
}

int check(int elem, int arr[], int size)
{
    int count = 0;
   for(int i=0; i<size; i++)
   {
       if(elem == arr[i])
            count++;
   }
   
   return  count;
}


/*

Enter Array Size :- 10
Enter Numbers : 10 20 30 40 50 50 60 10 35 112
10 count in arry -> 2
20 count in arry -> 1
30 count in arry -> 1
40 count in arry -> 1
50 count in arry -> 2
50 count in arry -> 2
60 count in arry -> 1
10 count in arry -> 2
35 count in arry -> 1
112 count in arry -> 1

*/






