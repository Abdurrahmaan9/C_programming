// write a programe giving a vivid use of nasted IF ... ELSE statments in C

#include<stdio.h>
#include<stdlib.h>
int main() {
    int grade;
    int option;
    printf("\toptions\n");
    printf("!. to check results\n");
    printf("2. to Exit program\n");
    scanf("%d", &option);
   
    
    if (option == 1){
        printf("Enter your Grade: "); // Ask for input from user
        scanf("%d", &grade);  // Read the value of variable 'grade'
        if ( grade >= 60 ) {
            printf( "You Passed\n" );
            } /* end if */
        else {
            printf( "You Failed\n" );
            } /* end else */
    }
    else if(option == 2){
        exit;
    }

    return 0;
}