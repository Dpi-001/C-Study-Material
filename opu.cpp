
#include<stdio.h>
int fib(int n);
int main()
{
	int n,i;
	printf("\n enter the number");
	scanf("%d",&n);
	printf("\n the fibonacci number up to %d terms \n",n);
	for(i=0;i<=n;i++)
	printf("%d\t", fib(i));
	return 0;
	
}
int fib(int n)
{
	if(n==0)
	return 0;
	if(n==1)
	return 1;
	else 
	return fib(n-1)+fib(n-2);
	
}
