#include <stdio.h>

int main() {
    char gender;
    scanf(" %c", &gender);

    switch (gender) {
        case 'm':
        case 'M':
            printf("Male\n");
            break;
        case 'f':
        case 'F':
            printf("Female\n");
            break;
        default:
            printf("Invalid input\n");
    }

    return 0;
}
