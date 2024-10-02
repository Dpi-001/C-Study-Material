#include <stdio.h>

int main() {
    float amount, exchange_rate, converted_amount;

    printf("Enter the amount in your currency: ");
    scanf("%f", &amount);

  
    printf("Enter the exchange rate (1 unit of your currency to target currency): ");
    scanf("%f", &exchange_rate);

  
    converted_amount = amount * exchange_rate;

    
    printf("The converted amount is: %.2f\n", converted_amount);

    return 0;
}
