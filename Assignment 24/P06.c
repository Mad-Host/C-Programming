// WAP to find a string which is end with letter 's' and sotred in 2D Arrays.

#include<stdio.h>
#include<string.h>

void find_words(char [], char);
void print(int, int, char[]);

int main()
{

    char type[60], find;
    
    printf("Type something : ");
    fgets(type, 60, stdin);
    type[strlen(type) - 1] = ' ';

    printf("Enter the Last Finding Character : ");
    scanf("%c",&find);

    printf("Words having %c in Ending : ",find);
    find_words(type, find);

    printf("\n");
    return 0;
}

void find_words(char type[60], char find)
{
    int k;
    for(int i=0; type[i]; i++)
    {
        if(type[i] == ' ' && type[i-1] == find 
        || type[i] == '\0')
        {
            for(k=i-1; type[k] != ' '; k--);
            print(k, i-1, type);
                
        }
    }
}

void print(int start, int end, char type[60])
{
    for(int i=start; i<=end; i++)
        printf("%c",type[i]);
    printf(" ");
}

/*

Type something : hi, developers are yours workings
Enter the Last Finding Character : s
Words having s in Ending :  developers  yours  workings 

*/

