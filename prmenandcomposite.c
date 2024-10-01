#include<stdio.h>
#include<conio.h>
int main()
{
int i,num,count=0;
printf("Enter a number: \n");
scanf("%d",&num);\
for(i=1;i<=num;i++);
{
	if(num%i==0)
	{
		count++;
	}
}
if(count==2)
{
	printf("\n number is prime %d",num);
}
else
{
	printf("\n number is composite %d",num);
}
getch();
}
