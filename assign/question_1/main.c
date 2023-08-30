#include<stdio.h>

int main()
{
    /* code */
    // variable declaration
    const float salary = 20.0;
    const int  regular_working_hours_a_week = 30;
    const int time_worked = regular_working_hours_a_week * 1.5;

    int total_hours_worked;
    float total_salary, regular_salary, overtime_salary;

    printf("\nEnter the time you worked: ");
    scanf("%d", &total_hours_worked);

    // IF..ELSE statement to huncle all the the calculations
    if (total_hours_worked <= regular_working_hours_a_week)
    {
        /* code */
        // Calculating the regular salary without the overtime
        regular_salary = salary * regular_working_hours_a_week;
        overtime_salary = 0.0;

    }else{
        /* code */
        // Calculating the regular salary without the overtime
        regular_salary = regular_working_hours_a_week * salary;
        // calculating the overtime amount
        overtime_salary = (total_hours_worked - regular_working_hours_a_week) * time_worked;
        
    }
    
    // Calculating the total salary
    total_salary = regular_salary + overtime_salary;
    
    printf("Your total salary for this week is: ");
    printf("%f\n", total_salary);

    main();
    return 0;
}
