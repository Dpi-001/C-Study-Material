#include<stdio.h>
int main()
{
	int i,j,count=0;
	printf("50 to 100:");
	for(i=50;i<=100;i++)
	{
	for(j=2;j<i;j++)
	{
		if(i%j==0)
		{
			count++;
			break;
		}
		}	
	}
	if(count==0&&i!=1)
		printf("\n %d",i);
		count=0;
	return 0;
}
