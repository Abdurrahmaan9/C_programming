#include<stdio.h>
#include <math.h>

int main()
{
    /* code */
    printf("\tfinancial application\n");

    double investment_amount, annual_interest_rate;
    int number_of_years_to_invest;

    // getting the principle amount 
    printf("Enter the Investment Amount: ");
    scanf("%lf", &investment_amount);

    // getting the annual interest amount 
    printf("Enter the annual Interest Amount: ");
    scanf("%lf", &annual_interest_rate);

    // getting the number of years for the investment  
    printf("Enter the number_of_years_to_invest: ");
    scanf("%d", &number_of_years_to_invest);

    
    
    // Calculate and display future investment values
    printf("\nYear\tFuture Value\n");
    for (int year = 1; year <= number_of_years_to_invest; year++) {
        double futureValue = investment_amount * pow(1.0 + annual_interest_rate, year);
        printf("%d\t%.2lf\n", year, futureValue);
    }

    
    

    return 0;
}
