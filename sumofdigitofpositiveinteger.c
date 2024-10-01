#include<stdio.h>
#include<conio.h>
int main() 
{ 
int num,n,d1,d2,d3,d4,sum;
printf(" Enter a five digit integer:");
scanf("%d",&num);
n=num;
d1=n%10;
n=n/10;
d2=n%10;
n=n/10;
d3=n%10;
n=n/10;
d4=n%10;
n=n/10;
sum= d1+d2+d3+d4+n;
printf("sum=%d",sum);
getch();
}
