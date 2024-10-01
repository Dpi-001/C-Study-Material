#include<stdio.h>
#include<conio.h>
int main()
{
	int array[100],n,i,j,temp;
	printf("Enter a number of element:");
	scanf("%d",&n);
	printf("\n Enter a %d integer:",n);
	for(i=0;i<n;i++)
	{
		printf(" \n Enter a %d integer :",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=0;j<(n-i-1);j++)
		{
			if(array[j]<array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
			}
		}
	}
	printf("\n Sorted in Descending order:");
	for(i=0;i<n;i++)
	{
		printf("%d",array[i]);
	}
	getch();
}

