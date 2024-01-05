#include <stdio.h>

int main() {
    float principle, interestRate, years;

    printf("Enter loan amount: ");
    scanf("%f", &principle);

    printf("Enter number of years: ");
    scanf("%f", &years);

    if (principle >= 10000) {
        interestRate = 0.20;
    } else if (principle >= 8000 && principle <= 9999) {
        interestRate = 0.18;
    } else {
        interestRate = 0.16;
    }

    float interest = principle * interestRate * years;

    printf("Loan: %.2f\n", principle);
    printf("Years: %.2f\n", years);
    printf("Rate: %.2f\n", interestRate * 100);
    printf("Interest: %.2f\n", interest);

    return 0;
}
