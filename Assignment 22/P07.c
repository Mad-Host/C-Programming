// WAP with function to find the character between starting index and end index.

#include<stdio.h>
#include<string.h>

int main()
{

    char address[60],letter;
    int start, end;
    printf("Type your Address : ");
    fgets(address, 60, stdin);
    address[strlen(address) - 1] = '\0';

    printf("Enter character You want to search : ");
    scanf("%c",&letter);

    printf("Etner Start : End index : ");
    scanf("%d : %d",&start,&end);

    for(int i=start; i<=end; i++)
    {
        if(address[i] == letter)
        {
            printf("Yes, %c is there.",letter);
            break;
        }
        else if(i == end)
            printf("Nop, %c is not there.",letter); 
    }

    printf("\n");
    return 0;
}



/*

Type your Address : PARBHANIKAR IS GOOD IN NATURE.
Enter character You want to search : O
Etner Start : End index : 1 : 20
Yes, O is there.

*/


