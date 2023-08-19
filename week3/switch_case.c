// Question: Grade Calculator
// Write a C program that takes a numerical grade as input and converts it into a letter grade based on the following scale:
// Numerical Grade 90-100: Letter Grade A
// Numerical Grade 80-89: Letter Grade B
// Numerical Grade 70-79: Letter Grade C
// Numerical Grade 60-69: Letter Grade D
// Numerical Grade Below 60: Letter Grade F
// Your program should prompt the user to enter a numerical grade and then display the corresponding letter grade.
                                    // Here's an outline of the program:
// Include the necessary header files (stdio.h).
// Declare a variable to store the numerical grade (integer type).
// Prompt the user to enter the numerical grade.
// Use a switch-case statement to determine the letter grade based on the numerical grade. Display the corresponding letter grade using printf.
// Handle cases where the numerical grade is outside the specified range (e.g., negative or above 100).
// Remember to properly validate and handle user input to ensure your program works correctly.

#include<stdio.h>

int main(void){

    int grade;
    printf("enter your Grade: ");
    scanf("%d", &grade);

    switch (grade){
        case 90 ... 100:
            printf("with your grade of: %d\nYou scored an A\n", grade);
            break;
        case 80 ... 89:
            printf("with your grade of: %d\nYou scored a B\n", grade);
            break;
        case 70 ... 79:
            printf("with your grade of: %d\nYou scored a C\n", grade);
            break;
        case 60 ... 69:
            printf("with your grade of: %d\nYou scored a D\n", grade);
            break;
        case 0 ... 59:
            printf("with your grade of: %d\nYou scored an F\n", grade);
            break;
        default:
            printf("Invalide input!\n");
            break;
    };
    main();

    return 0;
}