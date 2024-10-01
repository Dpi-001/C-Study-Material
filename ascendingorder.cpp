#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,temp,array[100],n;
	printf("Enter a number of element:");
	scanf("%d",&n);
	printf("\n Enter a %d integer:",n);
	for(i=0;i<n;i++){
		printf("\n Enter a %d integer:",i+1);
		scanf("%d",&array[i]);
	}
	for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	{
		if(array[j]>array[j+1])
		{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
		}
	}
}
printf("\n Sorted list of ascending order:");
for(i=0;i<n;i++){
	printf("%d \n",array[i]);
}
getch();
}
