#include<stdio.h>
#include<conio.h>
int main()
{
	int i,num,rev=0,rem=0,temp;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	if(num>=0)
	{
		while(num!=0)
		{
			rem=num%10;
			rev=rem*10+rev;
			num=num/10;
		}
	}
	else
	{
	printf("\n Enter valid number");
	}
	if(temp==rev)
	{
		printf("\n number is palindrome %d",temp);
	} 
	else
	{
		printf("\n number is not palindrome %d",temp);
	}
	getch();
}
