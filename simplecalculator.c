#include <stdio.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float mult(float num1, float num2);
float div(float num1, float num2);
int main()
{
    char option;
    float num1, num2, result=0;
    printf("Enter the first number\n");
    printf("Enter the second number\n");
    printf("Enter the choice\n");
    scanf("%f %f %c", &num1,&num2,&option);
    switch(option)
    {
        case '+': 
            result = add(num1, num2);
            break;

        case '-': 
            result = sub(num1, num2);
            break;

        case '*': 
            result = mult(num1, num2);
            break;

        case '/': 
            result = div(num1, num2);
            break;

        default: 
            printf("Invalid operator");
    }
    printf("%.2f %c %.2f = %.2f", num1, option, num2, result);

    return 0;
}
float add(float num1, float num2)
{
    return num1 + num2;
}
float sub(float num1, float num2)
{
    return num1 - num2;
}
float mult(float num1, float num2)
{
    return num1 * num2;
}
float div(float num1, float num2)
{
    return num1 / num2;
}