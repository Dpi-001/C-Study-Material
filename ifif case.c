#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("Enter age :\n");
	scanf("%d",&age);
	if(age>=18)
	{
		printf("Cast the vote \n");
	}
	if(age<=18)
	{
		printf(" sorry u can u are minor \n");
	}
}
