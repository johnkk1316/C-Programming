#include <stdio.h>

int main()
    {
        char operator;
        double number1, number2, result;

        // choose operator.
        printf("Choose operator (+, -, *, /): ");
        scanf("%c", &operator);

        // Input first number.
        printf("Choose first number1: ");
        scanf("%lf", &number1);

        // Input second number.
        printf("Choose second number2: ");
        scanf("%lf", &number2);

        // Switch statement
        switch(operator){
            case '+':
                result = number1 + number2;
                printf("\nresult: %.2lf", result);
            break;

            case '-':
                result = number1 - number2;
                printf("\nresult: %.2lf", result);
            break;

            case '*':
                result = number1 * number2;
                printf("\nresult: %.2lf", result);
            break;

            case '/':
                result = number1 / number2;
                printf("\nresult: %.2lf", result);
            break;


            default:
                printf("%c is invalid", operator);
        }


        return 0;
    }
