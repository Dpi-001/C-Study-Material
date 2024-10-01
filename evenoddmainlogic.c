#include<stdio.h>
int main()
{
	int a;
	printf("Enter a any number:");
	scanf("%d",&a);
	a%2==0?printf("\nThis is even"):printf("This is odd");
}
