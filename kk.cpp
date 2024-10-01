#include<stdio.h>
#include<conio.h>
int main()
{
	int a;
	float arr[10];
	printf("enter marks 10 numbers");
	for(a=0;a<10;a++)
	{
		scanf("%f",&arr[a]);
		
	}
	printf("\n the entered numbers are\n");
	for(a=0;a<10;a++)
	{
		printf("\narr[%d]=%f",a,arr[a]);
		
	}
	return 0;
	
}
