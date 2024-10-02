// WAP to find wheather the given word is anagram or NOT.

#include<stdio.h>
#include<string.h>

void check_anagram(char[], char[]);

int main()
{

    char words[20], anagram[20];


    printf("\n ***** ANAGRAM WORDS *****\n\n");
    printf("Your First Word : ");
    fgets(words, 20, stdin);
    words[strlen(words) - 1] = '\0';

    printf("Your Anagram Word  : ");
    fgets(anagram, 20, stdin);
    anagram[strlen(anagram) - 1] = '\0';
    
    check_anagram(words, anagram);


    printf("\n");
    return 0;
}

void check_anagram(char words[], char anagram[])
{
    int sum_words = 0, sum_anagram = 0;
    for(int i=0; words[i]; i++)
    {
        if(words[i] != ' ')
            sum_words = sum_words + words[i];
    }

    for(int i=0; anagram[i]; i++)
    {
        if(anagram[i] != ' ')
            sum_anagram = sum_anagram + anagram[i];
    }

    if(sum_anagram == sum_words)
        printf("\n\n *** The %s and %s are ANAGARAM WORDS!!! ***",words,anagram);
    else 
        printf("\n\n *** The %s and %s is NOT ANAGRAM... ***",words,anagram);

}

/*

 ***** ANAGRAM WORDS *****

Your First Word : Dormitory
Your Anagram Word  : Dirty room


 *** The Dormitory and Dirty room are ANAGARAM WORDS!!! ***


*/

