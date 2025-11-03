#include <stdio.h>

int main() {
    int num, digit, new_num = 0, place = 1;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    // Process har digit ka right to left
    while (num > 0) {
        digit = num % 10;     // Get last digit
        digit = (digit + 1) % 10; // 1 add kro, if 9 to 0
        new_num = new_num + digit * place;
        place = place * 10;
        num = num / 10;       // Remove krega last digit
    }

    printf("New number after adding 1 to each digit = %d\n", new_num);

    return 0;
}
