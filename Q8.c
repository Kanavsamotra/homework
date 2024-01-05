#include <stdio.h>
#include <math.h>

int main() {
    int num;
    scanf("%d", &num);

    while (num != 0) {
        int digit = num % 10;
        printf("%d ", (int)pow(digit, 3));
        num /= 10;
    }

    return 0;
}
