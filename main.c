#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, count = 0;

    printf("Enter a natural number n: ");
    scanf("%d", &n);

    for (int m = 1; m < n; m++) {
        if (n % m == n / m) {
            count++;
        }
    }

    printf("The number of equal divisors of a number %d: %d\n", n, count);

    return 0;
}
