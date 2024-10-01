#include<stdio.h>
#include<conio.h>
int main()
{
	float price,priceofd;
	int n;
	printf("Enter pricedorzen of mangoes:");
	scanf("%f",&priceofd);
	printf("Enter the numbers of mangoes:");
	scanf("%d",&n);
	price= priceofd/12 *n;
	printf("The price %d of mangoes is %f",n,price);
	getch();
}
