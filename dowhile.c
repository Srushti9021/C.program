#include <stdio.h>

int main() {
    int num, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num;
    do {
        reversed = reversed * 10 + temp % 10;
        temp /= 10;
    } while (temp != 0);

    printf("Reversed number is: %d\n", reversed);
    return 0;
}
