#include<stdio.h>
#include<conio.h>
int main()
{
	int a,sum;
	int marks[4];
	float average;
	sum=0;
	for(a=0;a<=3;a++)
	{
		printf("enter the marks");
		scanf("%d",&marks[a]);
		
	}
	
for (a=0;a<=3;a++)
{
	sum=sum+marks[a];
	
}
average=sum/5.0;
printf("average:%.2f",average);
return 0;
}
