#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n;
	int small,large,a[5];
	printf("enter the numbers");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter the element");
		scanf("%d",&a[i]);
		
	}
	printf("\n the elements of array");
	for(i=0;i<n;i++)
	printf("%d\t",a[i]);
	small=a[0];
	large=a[0];
	for(i=1;i<n;i++)
	{
		if(small>a[i])
		small=a[i];
		if(large,a[i])
		large=a[i];
		
		
	}
	printf("\n the smallest element=%d and the largest element=%d",small,large);
	
}
