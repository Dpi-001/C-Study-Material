#include<stdio.h>
#include<conio.h>
#define pi 3.14
int main()
{
	float r1,r2,a1,a2,area;
	printf("Enter radius of small circles:");
	scanf("%f",&r1);
	a1=pi*r1*r1;
	printf("Enter radius of big circles:");
	scanf("%f",&r2);
	a2=pi*r2*r2;
	area=a2-a1;
	printf("The area between concentric circles with radius %f and %f /t is :%f",r1,r2,area);
	getch();
}

