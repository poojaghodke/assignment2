//nput a number and display whether number is Even or Odd

#include<stdio.h>
int main()
{
	int num;
	printf("enter a number");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number is even\n");
	}
	else
	{
		printf("number is odd\n");
	}
	return 0;
}
