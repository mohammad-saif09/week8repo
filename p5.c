#include <stdio.h>

int main() {
    int n1, n2, a, b, temp, hcf, lcm;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    a = n1;
    b = n2;

    // Find HCF using Euclidean algorithm
    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;               // The last non-zero remainder is the HCF
    lcm = (n1 * n2) / hcf; // Formula: LCM × HCF = n1 × n2

    printf("HCF (GCD) of %d and %d = %d\n", n1, n2, hcf);
    printf("LCM of %d and %d = %d\n", n1, n2, lcm);

    return 0;
}
