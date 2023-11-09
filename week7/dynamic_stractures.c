#include <stdio.h>
#include <stdlib.h> // Include the necessary header for dynamic memory allocation

// Define the structure
struct student {
    char *name;   // Change to pointer for dynamic allocation
    char *course; // Change to pointer for dynamic allocation
    int age;
    int year;
};

// Function to dynamically allocate memory for a string
char *getDynamicString() {
    char buffer[256];
    scanf("%255s", buffer);

    // Allocate memory for the string and copy the content
    char *str = malloc(strlen(buffer) + 1); // +1 for the null terminator
    if (str == NULL) {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }
    strcpy(str, buffer);

    return str;
}

int main() {
    // Declare a variable of type struct student
    struct student stu;

    // Prompt the user for details
    printf("Enter student details:\n");

    printf("Name: ");
    stu.name = getDynamicString();

    printf("Course: ");
    stu.course = getDynamicString();

    printf("Age: ");
    scanf("%d", &stu.age);

    printf("Year: ");
    scanf("%d", &stu.year);

    // Display the entered details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", stu.name);
    printf("Course: %s\n", stu.course);
    printf("Age: %d\n", stu.age);
    printf("Year: %d\n", stu.year);

    // Free dynamically allocated memory
    free(stu.name);
    free(stu.course);

    return 0;
}
