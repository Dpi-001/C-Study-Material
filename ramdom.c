#include<stdio.h>
#include<conio.h>
int main()
{
	int x;
	printf("Enter a number:");
	scanf("%d",&x);
	x%2==0?printf("This is even"):printf("This is odd");
	getch();
}
