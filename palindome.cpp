#include<stdio.h>
int main()
{
	int num,temp=0,rev=0,rem=0;
	printf("enter a number:");
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
		printf("Enter a valid number");
	}
	if(temp==rev)
	{
		printf("\n number is palindrome %d",temp);
	}
	else 
	{
		printf("\n number is not a palindrome %d",temp);
	}
}
