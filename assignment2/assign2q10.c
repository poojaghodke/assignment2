//Write a program to accept a character c and display category of the input character

#include<stdio.h>
int main()
{
	char c;
	printf("enter a character : ");
	scanf("%c",&c);

	if((c>=65&&c<=90)||(c>=97&&c<=122))
	{
		printf("c is a letter\n");
		if(c>=65&&c<=90)
			printf("c is an uppercase letter\n");
		else
			printf("c is an lowercase letter\n");
	}

	else if(c>=48&&c<=57)
		printf("c is a digit\n");
	else if(c==32)
		printf("Space\n");
	else if(c==9)
		printf("tab\n");
	else if(c==13)
		printf("carriage return\n");
	else if(c==10)
		printf("new line\n");
	else
		printf("Not listed above\n");
	return 0;
}
