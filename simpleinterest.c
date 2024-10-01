#include<stdio.h>
#include<math.h>
int main()
{
    int p,t,r,SI;
    printf(" \n Enter principle , time and rate :");
    scanf("%d%d%d",&p,&t,&r);
    SI=((p*t*r)/100);
    printf("\n Simple interest is %d",SI);
    getch();
}

