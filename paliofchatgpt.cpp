#include <stdio.h>

int main() {
    int num, rev = 0, temp;

    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;

    if (num >= 0) { // Changed condition to check for positive numbers
        while (num != 0) {
            rev = rev * 10 + num % 10;
            num = num / 10;
        }

        if (temp == rev) {
            printf("Number is a palindrome: %d\n", temp);
        } else {
            printf("Number is not a palindrome: %d\n", temp);
        }
    } else {
        printf("Enter a valid positive number\n");
    }

    return 0;
}

