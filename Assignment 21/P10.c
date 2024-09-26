// WAP to find first occurance of given chracter in string.

#include<stdio.h>

int main()
{
    char arr[20], val,i;
    printf("Enter a String : ");
    fgets(arr,20,stdin);
    printf("Which character You want to search : ");
    scanf("%c",&val);

    for(i=0; arr[i]; i++)
    {
        if(val == arr[i])
            break;
    }

    arr[i-1] = '\0';
    printf("%s contains %c at index %d",arr,val,i+1);

    printf("\n");
    return 0;
}

/*

Enter a String : Hi, Developer!
Which character You want to search : e
Hi,  contains e at index 6

*/