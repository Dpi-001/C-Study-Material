#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,root1,root2,d;
	printf("enter three numbers:");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	root1=(-b+sqrt(d)/(2*a));
	root2=(-b-sqrt(d)/(2*a));
	printf("\n  root1=%.2f and root2=%.2f",root1,root2);
	getch();
	return 0;
}

