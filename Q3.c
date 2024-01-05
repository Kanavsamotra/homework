#include <stdio.h>

int main() {
    float num1, num2, result;
    char operation;

    scanf("%f", &num1);
    scanf("%f", &num2);
    scanf(" %c", &operation);

    switch (operation) {
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
        case '%':
            result = fmod(num1, num2);
            break;
        default:
            printf("Invalid operation\n");
            return 1;
    }

    printf("%f\n", result);

    return 0;
}
