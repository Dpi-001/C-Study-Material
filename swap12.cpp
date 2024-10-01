#include<stdio.h>
int main()
{
	int num1,num2;
	printf("Enter a first number:");
	scanf("%d",&num1);
		printf("Enter a Second number:");
scanf("%d",&num2);
num1=num1+num2;
num2=num1-num2;
num1=num1-num2;
printf("\n num1=%d",num1);
printf("\n num2=%d",num2);
}
