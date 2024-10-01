#include<stdio.h>
int main()
{
	int num,rev=0,temp=0,rem=0;
	printf("Enter a number:");
	scanf("%d",&num);
	temp=num;
	if(num>=100){
		while(num!=0){
			rem=num%10;
			rev=rev*10+rem;
			num=num/10;
		}
	}
	else 
	{
		printf("Valid number \n ");
	}
	if(temp=rev){
		printf("Number is palindrome %d",temp);
	}
	else 
	{
		printf("Number is not palindrome %d",temp);
	}
}
