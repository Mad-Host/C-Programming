#include <stdio.h>
#include <string.h>

void search_all_occurrences(char *, char, int *, int *);

int main() {
    char str[40], find;
    int arr[20], count = 0;

    // Warning for single character input
    printf("\n// BUG : This program only takes SINGLE Character, If you type a string, it only takes the first Character!!!\n\n");

    // Take input string
    printf("Type String: ");
    fgets(str, 40, stdin);
    str[strlen(str) - 1] = '\0'; // Remove newline character

    // Taking character to search
    printf("Search the Character: ");
    scanf("%c", &find);

    // To search occurrence of the character
    search_all_occurrences(str, find, arr, &count);

    // Print the indices where the character was found
    if (count > 0) {
        printf("Found at indices: { ");
        for (int i = 0; i < count; i++) {
            printf("%d ", arr[i]);
        }
        printf("}\n");
    } else {
        printf("Character not found in the string.\n");
    }

    return 0;
}

// Function to find all occurrences of a character and store the indices
void search_all_occurrences(char *p, char find, int *q, int *count) {
    for (int i = 0; *(p + i); i++) {
        if (*(p + i) == find) {
            *(q + *count) = i;  // Store index
            (*count)++;  // Increment count
        }
    }
}
