#include <stdio.h>
int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 11 == 0) {
        printf("The number %d is divisible by both 5 and 11.\n", num);
    }
    else {
        printf("The number %d is NOT divisible by both 5 and 11.\n", num);
    }

    return 0;
}