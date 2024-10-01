#include<stdio.h>
#include<stdlib.h>
void swap(int a, int b)
{
	a=a+b;
	b=a-b;
	a=a-b;
}
int main()
{
	int num1,num2;
	printf("Enter a number:");
	scanf("%d",&num1);
		printf("Enter a number:");
	scanf("%d",&num2);
	printf("Before swapping a number :num1=%d and num2=%d",num1,num2);
	swap(&num1,&num2);
	printf("After swapping a number :num1=%d and num2=%d",num1,num2);
	return 0;
}
