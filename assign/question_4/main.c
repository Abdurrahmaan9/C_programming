#include <stdio.h>
#include <math.h>

int main() {
  char operator;
  float first_number, second_number, result;

  printf("Select an operator (+, -, *, /, ^, sin, cos, tan): ");
  scanf("%c", &operator);

  switch (operator) {
    case '+':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      printf("Enter the second number: ");
      scanf("%f", &second_number);

      result = first_number + second_number;
      break;
    case '-':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      printf("Enter the second number: ");
      scanf("%f", &second_number);

      result = first_number - second_number;
      break;
    case '*':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      printf("Enter the second number: ");
      scanf("%f", &second_number);

      result = first_number * second_number;
      break;
    case '/':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      printf("Enter the second number: ");
      scanf("%f", &second_number);

      result = first_number / second_number;
      break;
    case '^':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      printf("Enter the second number: ");
      scanf("%f", &second_number);

      result = pow(first_number, second_number);
      break;
    case 's':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      result = sin(first_number);
      break;
    case 'c':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      result = cos(first_number);
      break;
    case 't':
      printf("Enter the first number: ");
      scanf("%f", &first_number);

      result = tan(first_number);
      break;
    default:
      printf("Invalid operator.");
      return 1;
  }

  printf("The result is %f.\n", result);

  main();
  return 0;
}