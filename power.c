#include<stdio.h>
#include<conio.h>
int main()
{
	int n,m,p;
	printf("Enter two numbers:");
	scanf("%d%d",&n,&m);
	p= pow(n,m);
	printf("\n The power of numbers is%d",p);
	getch();
}
