#include<stdio.h>
#include<conio.h>
int armstrong(int orgnum)
{
	int sum=0;
	int p=0;
	int rem=0;
	int num=orgnum;
	while(num!=0)
	{
		rem=rem%10;
		p=rem*rem*rem;
		sum=sum+p;
		num=num/10;
	}
	if(sum==orgnum)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}
int main()
{
int num;
printf("Enter a number:");
scanf("%d",&num);
if(armstrong(num)==0)
{
	printf(" %d is an Armstrong",num);
}
else
{
	printf(" %d is an not Armstrong",num);
}
}
