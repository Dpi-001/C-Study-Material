#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	char stname[100][100],temp;
	int i,j,n;
	printf("\n Enter a Number of names :");
	scanf("%d",&n);
	printf("\n Enter a order of names:");
	for(i=0;i<n;i++)
	{
		scanf("%s",&stname[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(strcmp(stname[i];stname[j]))>=0)
			{
				strcpy(temp,stname[i]);
				strcpy(stname[i],stname[j]);
				strcpy(stname[j],temp);
			}
		}
	}
	printf("\n Sort names in list:");
	for(i=0;i<n;i++){
		printf("%s",stname[i]);
	}
	getch();
}
