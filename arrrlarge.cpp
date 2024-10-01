#include<stdio.h>
int main()
{
	int i,small=0,arr[100];
	int n;
	printf("Enter a number of order:");
	scanf("%d",&n);
	printf("\n enter %d number : ",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
small=arr[0];
for(i=1;i<n;i++)
{
	if(arr[i]<small)
	{
		small=arr[i];
	}
}
printf("smallest number is %d",small);
return 0;
}
