#include <stdio.h>

// Function prototype
int factorial(int n);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number< 0) {
        printf("Invalid Input.\n");
    } else {
        printf("%d! = %d\n", number, factorial(number));
    }

    return 0;
}

// Function definition
int factorial(int n) {
    int result = 1;

    for (int i = 1; i <= n; i++) {
        result *= i;
    }

    return result;
}
