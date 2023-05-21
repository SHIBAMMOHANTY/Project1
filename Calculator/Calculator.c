#include <stdio.h>

int main() {
  // Declare variables.
  int num1, num2, result;
  char operator;

  // Get input from the user.
  printf("Enter the first number: ");
  scanf("%d", &num1);

  printf("Enter the second number: ");
  scanf("%d", &num2);

  // Get the operator from the user.
  printf("Enter the operator (+, -, *, /): ");
  scanf(" %c", &operator);

  // Perform the operation.
  switch (operator) {
    case '+':
      result = num1 + num2;
      break;
    case '-':
      result = num1 - num2;
      break;
    case '*':
      result = num1 * num2;
      break;
    case '/':
      result = num1 / num2;
      break;
    default:
      printf("Invalid operator.");
      return 0;
  }

  // Display the result.
  printf("%d %c %d = %d\n", num1, operator, num2, result);

  return 0;
}
