#include<stdio.h>
#include<conio.h>
int main()
{
	int a,stock[2];
	float price[2];
	float total=0;
	for(a=0;a<2;a++)
	{
		printf("enter the stock");
		scanf("%d",&stock[a]);
		printf("enter the price");
		scanf("%f",&price[a]);
		total=total+price[a]*stock[a];
		
	}
	printf("the total stock value%f\n",total);
	return 0;
	
}
