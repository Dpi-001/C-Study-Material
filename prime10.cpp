#include<stdio.h>
int main()
{
	int i,j,count=0;
	for(i=10;i<=30;i++){
		for(j=1;j<=i;j++){
			if(i%j==0)
			{
				count++;
			}
		}
		if(count<=2)
		{
			printf("\n prime number is %d");
		}
		count=0;
	}
	return 0;
}
