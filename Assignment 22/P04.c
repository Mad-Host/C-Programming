// C String Functions.

#include<stdio.h>
#include<string.h>

int main()
{

    // strcat()

    char name[50];
    char city[20];

    printf("First String : ");
    fgets(name, 20, stdin);

    name[strlen(name) - 1] = '\0';
    printf("Second String : ");
    fgets(city, 20, stdin);

    // strcat(name, city);
    strncat(name, city, 7);

    printf("Your Response : %s",name);

    printf("\n");
    return 0;
}

/*

------- strcat() -------
First String : MUMBAI 
Second String : IS A GOOD CITY.
Your Response : MUMBAIIS A GOOD CITY.


------- strncat() ---------
First String : Goa is 
Second String : good place for stay.
Your Response : Goa is good pl


*/
