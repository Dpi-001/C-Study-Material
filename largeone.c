#include<stdio.h>
int main()
{
	int a,b,large=0;
	printf("Enter two numbers:");
	scanf("%d%d",&a,&b);
	large=a>b?a:b;
	printf("\n large one is %d",large);
}
