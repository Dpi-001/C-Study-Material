#include<stdio.h>
int main ()
{
	int i,count=0,j;
	for(i=10;i<=30;i++)
	{
		for(j=1;j<=i;j++);
		{
			if (i%j==0){
				count++;
			}
		}
	if(count==2){
		printf("The number is prime %d");
	}
	 count=0;
}
return 0;
}
