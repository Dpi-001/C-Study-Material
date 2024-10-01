#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i,count=0;
	 printf("enter a number");
	 scanf("%d",&num);
	 for(i=1;i<=num;i++){
	 	if(num%i==0){
	 		count++;
		 }
	 }
	 if(count==2)
	 {
	 	printf("\n %d is Prime number",num);
	 }
	 else
	 {
	 		printf("\n %d is Composite number",num);
	 }
	 getch();
}
