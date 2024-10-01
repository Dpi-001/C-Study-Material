#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("Enter a three numbers:\n");
	scanf("%d%d%d",&a,&b,&c);
	if((a>b)&&(a>c))
	{
		printf("largest number is %d \n",a);
	}
	 else if((b>c)&&(b>a))
	{
		printf("largest number is %d \n",b);
	}
	else if((c>b)&&(c>a))
	{
		printf("largest number is %d \n",c);
	}
	else
	{
		printf("\n Not found");
	}
	printf("progarm is over\n");
	getch();
}
