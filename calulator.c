#include <stdio.h>

int main()
{
    int num1, num2; // variables to store the operands
    char op;        // variable to store the operator
    int result;     // variable to store the result

    printf("Enter the first number: ");
    scanf("%d", &num1); // read the first number from the user

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &op); // read the operator from the user

    printf("Enter the second number: ");
    scanf("%d", &num2); // read the second number from the user

    switch (op) // use switch case to perform different operations based on the operator
    {
    case '+':                 // if the operator is +
        result = num1 + num2; // add the numbers and store in result
        break;                // break out of the switch case
    case '-':                 // if the operator is -
        result = num1 - num2; // subtract the numbers and store in result
        break;                // break out of the switch case
    case '*':                 // if the operator is *
        result = num1 * num2; // multiply the numbers and store in result
        break;                // break out of the switch case
    case '/':                 // if the operator is /
        if (num2 == 0)        // check if the second number is zero to avoid division by zero error
        {
            printf("Error: Cannot divide by zero\n"); // print an error message
            return 0;                                 // exit the program with 0 status code
        }
        else
        {
            result = num1 / num2; // divide the numbers and store in result
        }
        break;                               // break out of the switch case
    default:                                 // if the operator is not valid
        printf("Error: Invalid operator\n"); // print an error message
        return 0;                            // exit the program with 0 status code
    }

    printf("%d %c %d = %d\n", num1, op, num2, result); // print the final result in the format num1 op num2 = result

    return 0; // exit the program with 0 status code
}
