#include <stdio.h>

    struct Students
    {
        /* data */
        char St_Name[64];
        char St_Program[126];
        int Year;
        int St_Number;
    };

 int main()
 {
    /* code */
    struct Students accesser;
    
    printf("Enter Student Name: ");
    scanf("%s63", accesser.St_Name);

    printf("Enter Student Program: ");
    scanf("%s125", accesser.St_Program);

    printf("Enter Student Year: ");
    scanf("%d", &accesser.Year);

    printf("Enter Student Number: ");
    scanf("%d", &accesser.St_Number);

        // Display the entered details
    printf("\nStudent Details:\n");
    printf("Name: %s\n", accesser.St_Name);
    printf("Course: %s\n", accesser.St_Program);
    printf("Year: %d\n", accesser.Year);
    printf("St_Number: %d\n", accesser.St_Number);

    return 0;
 }
 