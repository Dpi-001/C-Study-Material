#include<stdio.h>
int main()
{
	int i,j;
	char p='E';
	for(i=5;i>=1;--i)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c",p);
		}
		p--;
		printf("\n");
	}
}
