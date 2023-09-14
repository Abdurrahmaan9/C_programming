#include <stdio.h>
#include <math.h>

int main() {
  char operator;
  float first_number, second_number, result;

  printf("Select an operator (+, -, *, /, ^, sin, cos, tan): ");
  scanf("%c", &operator);

  printf("Enter the first number: ");
  scanf("%f", &first_number);

  printf("Enter the second number: ");
  scanf("%f", &second_number);

  switch (operator) {
    case '+':
      result = first_number + second_number;
      break;
    case '-':
      result = first_number - second_number;
      break;
    case '*':
      result = first_number * second_number;
      break;
    case '/':
      result = first_number / second_number;
      break;
    case '^':
      result = pow(first_number, second_number);
      break;
    case 's':
      result = sin(first_number);
      break;
    case 'c':
      result = cos(first_number);
      break;
    case 't':
      result = tan(first_number);
      break;
    default:
      printf("Invalid operator.");
      return 1;
  }

  printf("The result is %f.\n", result);

  return 0;
}