#include <stdio.h>
#include <math.h>

int main() {

    double num1;
    double num2;
    char operator;
    double result;

    printf("\nEnter an operator (+, -, /, *)  ");
    scanf("%c", &operator);

    switch (operator) {
        case '+':
        case '-':
        case '*':
        case '/':
            break;
        default:
            printf("\n%c is not a valid mathematical operator\n", operator);
            return 1; 
    }

    printf("\nEnter the first number: ");
    scanf("%lf", &num1);

    printf("\nEnter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            printf("\nanswer = %.3lf\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nanswer = %.3lf\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nanswer = %.3lf\n", result);
            break;
        case '/':
            if (num2 == 0) {
                printf("\nDivision by zero is not allowed.\n");
                return 1; 
            }
            result = num1 / num2;
            printf("\nanswer = %.3lf\n", result);
            break;
    }

    return 0;
}