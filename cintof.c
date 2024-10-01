#include<math.h>
#include<stdio.h>
int main()
{
    float celsius,fahrenheit;
    printf(" \n Enter temperature in celsius  :");
    scanf("%f",&celsius);
    fahrenheit=(celsius * (9/5)) + 32 ;
    printf("\n %.4fcelsius = %.4f fahrenheit",celsius,fahrenheit);
    getch();
}

