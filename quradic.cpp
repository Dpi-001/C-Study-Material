#include<stdio.h>
#include<conio.h>
#include<math.h>
int  main()
{
	float a,b,c,dis,root1,root2;
	printf("Enter a coefficient:");
	scanf("%f%f%f",&a,&b,&c);
	dis= b*b-4*a*c;
	root1=-b+(sqrt(dis)/(2*a));
		root1=-b-(sqrt(dis)/(2*a));
		printf("root1=%.2f and root2=%.2f",root1,root2);
		getch();
}
