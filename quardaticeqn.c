#include<math.h>
#include<stdio.h>
int main()
{
    float a,b,c,deter,root1,root2;
    printf(" \n Enter coefficients a ,b and c :");
    scanf("%f%f%f",&a,&b,&c);
    deter=b*b-4*a*c;
    root1=(-b+sqrt(deter)/(2*a));
    root2=(-b-sqrt(deter)/(2*a));
    printf("\n root1=%.3f and root2=%.3f",root1,root2);
    getch();
}

