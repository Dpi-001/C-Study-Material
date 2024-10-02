#include <stdio.h>

int main() {
    int dozens;
    float price_per_mango, total_price;
    printf("Enter the number of dozens of mangoes: ");
    scanf("%d", &dozens);
    printf("Enter the price of one mango: ");
    scanf("%f", &price_per_mango);
    total_price = dozens * 12 * price_per_mango;
    printf("The total price for %d dozen(s) of mangoes is: %.2f\n", dozens, total_price);
    return 0;
}
