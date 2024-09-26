// WAP to count the vowels in the string.

#include<stdio.h>

int main()
{
    // Taking input from user.
    char city_name[20];
    int count = 0,i;
    printf("Enter Your City Name (small-letter & capital-letter) : ");
    fgets(city_name,20,stdin);

    // To count the vowels in string.
    for (i = 0; city_name[i]; i++)
    {
        if (city_name[i] == 'a' || city_name[i] == 'e' || city_name[i] == 'i' || city_name[i] == 'o' || city_name[i] == 'u' || city_name[i] == 'A' || city_name[i] == 'E' || city_name[i] == 'I' || city_name[i] == 'O' || city_name[i] == 'U')
            count++;
    }

    city_name[i-1] = '\0';
    printf("%s contains %d vowels.",city_name,count);
    printf("\n");
    return 0;
}

/*

Enter Your City Name (small-letter) : parbhani
parbhani contains 3 vowels.

Enter Your City Name (small-letter) : Umar Aziz
Umar Aziz contains 4 vowels.

*/




