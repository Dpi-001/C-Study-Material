#include<stdio.h>
int main()
{
int a,b,smallest=0;
printf("Enter a two numbers:");
scanf("%d%d",&a,&b);
smallest=a<b?a:b;
printf("Smallest one is %d",smallest);
}
