#include <stdio.h>
#include <math.h>

int main() {
  double principal, interest_rate, future_value;
  int years;

  printf("Enter the principal amount: ");
  scanf("%lf", &principal);

  printf("Enter the annual interest rate: ");
  scanf("%lf", &interest_rate);

  printf("Enter the number of years: ");
  scanf("%d", &years);

  for (int i = 1; i <= years; i++) {
    future_value = principal * pow(1 + interest_rate, i);
    printf("Future value in year %d is: %lf\n", i, future_value);
  }

  return 0;
}