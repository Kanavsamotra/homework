#include <stdio.h>
#include <math.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d:%d\n", i, (int)pow(i, 3));
    }

    return 0;
}
