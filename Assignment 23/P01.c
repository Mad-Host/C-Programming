// WAP to check weather the string is  palindrome word.

#include<stdio.h>
#include<string.h>

int main()
{

    char word[20];
    printf("Enter Your String : ");
    fgets(word, 20, stdin);
    word[strlen(word) - 1] = '\0';

    int j = strlen(word)-1;
    for(int i=0; i<strlen(word); i++)
    {
        if(i == j || i>j)
        {
            printf("%s is an Palindrome String.",word);
            break;
        }
        if(word[i] != word[j])
        {
           printf("%s is not Palindrome String.",word) ;
            break;
        }
        j--;
    }

    printf("\n");
    return 0;
}


/*


Enter Your String : madam
madam is an Palindrome String.


Enter Your String : likeil
likeil is not Palindrome String.
*/





