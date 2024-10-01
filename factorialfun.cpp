#include<stdio.h>
long fact(int);
int main()
{
	int a;
	printf("\n enter the number");
	scanf("%d",&a);
	printf("\n the fatorial of %d is %ld",a,fact(a));
	
	return 0;
}
long fact(int n)
{
	if(n==0)
	return 1;
	else 
	return(n * fact( n-1));
}
