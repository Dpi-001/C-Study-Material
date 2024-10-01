#include<stdio.h>
int fact(int);
int main()
{
    int result;
    result=fact(6);
    printf(" \n %d",result);
}
    int fact(int n)
	{
		if(n==1)
 return 1;
 else
 return n*fact(n-1)	;
 }
    

