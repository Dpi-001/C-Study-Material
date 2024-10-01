#include<stdio.h>
#include<conio.h>
int main()
{
	float a,b,c,s,area;
	printf("Enter three number:");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("The area =%f",area);
	getch();
}
