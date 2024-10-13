#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // For malloc


// Structure definition
struct Marks {
    int rollno;
    char name[20];
    int chem_marks;
    int phy_marks;
    int math_marks;
};


// Function Prototypes
void input(struct Marks [], int);
void score(struct Marks [], int);

int main() {
    int val;

    printf("\n\n === CALCULATE PERCENTAGE OF STUDENTS ===\n");
    printf("No. of Students (INT): ");
    scanf("%d", &val);

    // Dynamically allocate memory for the array of students
    struct Marks *x = (struct Marks*)malloc(val * sizeof(struct Marks));

    if (x == NULL) {
        printf("Memory allocation failed!\n");
        return 1;  // Exit if memory allocation fails
    }

    // Calling input function
    input(x, val);

    // Calling score function
    score(x, val);

    // Free the dynamically allocated memory
    free(x);

    printf("\n");
    return 0;
}

// Input Function
void input(struct Marks x[], int size) {
    printf("\n--- Taking input of Each Student ---\n");
    for(int i = 0; i < size; i++) {
        printf("S%d Roll NO: ", i + 1);
        scanf("%d", &x[i].rollno);

        // Clear input buffer before reading name
        getchar();  // This removes the newline character left by scanf

        printf("Name of Student: ");
        fgets(x[i].name, 20, stdin);
        x[i].name[strlen(x[i].name) - 1] = '\0';  // Remove newline character

        printf("Enter Chemistry Marks: ");
        scanf("%d", &x[i].chem_marks);

        printf("Enter Physics Marks: ");
        scanf("%d", &x[i].phy_marks);

        printf("Enter Maths Marks: ");
        scanf("%d", &x[i].math_marks);
    }
}

// Score Function
void score(struct Marks x[], int size) {
    printf("\n\n === RESULT OF EACH STUDENT ===\n");
    for(int i = 0; i < size; i++) {
        // Correct percentage calculation by casting to float
        float result = ((x[i].chem_marks + x[i].math_marks + x[i].phy_marks) / 300.0) * 100.0;

        printf("Student Name: %s\n", x[i].name);
        printf("PERCENTAGE: %.2f%%\n", result);  // Escape percentage symbol using %%
        printf("\n");
    }
}
