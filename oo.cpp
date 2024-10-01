#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	float arr[6];
	for(a=0;a<6;a++)
	{
		printf("\n enter the numbers");
		scanf("%f",&arr[a]);
		
	}
	printf("\n the entered numbers");
	for (a=0;a<6;a++)
	{
		printf("\narr[%d]=%f",a,arr[a]);
		
	}
	return 0;
}
