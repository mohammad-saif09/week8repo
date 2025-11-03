#include <stdio.h>

int main() {
    int lower, upper, i, j, isPrime;

    printf("Enter lower limit: ");
    scanf("%d", &lower);

    printf("Enter upper limit: ");
    scanf("%d", &upper);

    printf("Prime numbers between %d and %d are:\n", lower, upper);

    // Loop through all numbers in the range
    for (i = lower; i <= upper; i++) {
        if (i < 2)
            continue;  // Skip numbers less than 2

        isPrime = 1;  // Assume i is prime

        // Check if i is divisible by any number from 2 to sqrt(i)
        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    printf("\n");
    return 0;
}
