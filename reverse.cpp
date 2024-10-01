#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,rem=0,rev=0;
	int temp=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	if(num>=100)
	{
		while(num!=0)
		{
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
	}
	else
	{
		printf("\n Enter a valid number");
	}
	printf("\n reverse number is %d",rev);
	getch();
}
