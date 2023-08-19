// write a program in C that checks if a student has passed or has failed

#include<stdlib.h>
#include<stdio.h>
int main() {
int grade;

    printf("Enter your Grade: "); // Ask for input from user
    scanf("%d", &grade);  // Read the value of variable 'grade'
    if ( grade >= 60 ) {
        printf( "You Passed\n" );
        } /* end if */
    else {
        printf( "You Failed\n" );
        } /* end else */
    main();

    return 0;
}