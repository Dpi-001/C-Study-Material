#include<stdio.h>
int main()
{
	int i,j,m;
	for(i=2;i<=15;i++)
	{
		for(j=1;j<=10;j++)
	{
		m=i*j;
		printf("\n %d * %d= %d",i,j,m);
	}
	printf("\n");
}
return 0;
}
