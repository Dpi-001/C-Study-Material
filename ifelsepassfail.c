#include<stdio.h>
#include<conio.h>
int main()
{
	int sci,mat;
	printf("Enter a two subject:\n");
	scanf("%d%d",&sci,&mat);
	if((sci>=33)&&(mat>=33))
	{
		printf("U are passed \n");
	}
	else
	{
		printf("U are failed \n");
	}
}
