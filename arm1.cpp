#include<stdio.h>

int armstrong(int orgnum) {
    int sum = 0;
    int rem = 0;
    int num = orgnum;

    while (num != 0) {
        rem = num % 10;
        sum += rem * rem * rem;
        num = num / 10;
    }

    if (sum == orgnum) {
        return 0;
    } else {
        return 1;
    }
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (armstrong(num) == 0) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }

    return 0;
}

