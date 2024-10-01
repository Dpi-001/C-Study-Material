#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	float d;
	printf("\t Enter two numbers :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf(" \n The sum is %d",c);
	c=a-b;
		printf("\n The sub is %d",c);
		c=a*b;
			printf("\n The mul is %d",c);
			d= a/b;
				printf("\n The div is %f",d);
	getch();
}

