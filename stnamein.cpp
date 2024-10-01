#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char stname[100][100],temp[100];
	int n,i ,j;
	printf("\n Enter a number of element:");
	scanf("%d",&n);
	printf("\n Enter a names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",stname[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(strcmp(stname[i],stname[j])>0)
			{
				strcpy(temp,stname[i]);
				strcpy(stname[i],stname[j]);
				strcpy(stname[j],temp);
			}
		}
	}
	printf("\n Sorted name list :");
	for(i=0;i<n;i++)
	{
		printf("\n %s",stname[i]);
	}
	getch();
}
