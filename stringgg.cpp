#include<stdio.h>
#include<string.h>
int main()
{
	char str1[100],str2[100];
	printf("Enter a string:");
	gets(str1);
	strcpy(str2,str1);
	strrev(str1);
	if (strcmp(str1,str2)==0)
	{
		printf("\n string is palindrome");
	}
	else
	{
		printf("\n string is not palindrome");
	}
}

