
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number to calculate its Factorial: ");
    scanf("%d", &n);

    int fact = 1;
    for(int i=2; i<=n; i++){
        fact=fact*i;
    }
    
    printf("%d", fact);

    return 0;
}