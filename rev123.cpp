#include<stdio.h>
int main()
{
	int temp=0,num,rem=0,rev=0;
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
		printf("\n Valid number");
	}
	printf("\n Reverse number is %d",rev);
}
