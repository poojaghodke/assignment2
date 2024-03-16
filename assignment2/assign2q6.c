//program to accept a 5 digit number and check whether it is a numeric palindrome

#include<stdio.h>
int main()
{
	int num,temp,rev;
	printf("enter 5 digit number : ");
	scanf("%d",&num);
	temp=num;

	while(temp!=0)
	{
		rev=rev*10+(temp%10);
		temp=temp/10;
	}

	if(rev==num)
	{
		printf("number is palindrome\n");
	}
	else
	{
		printf("number is not palindrome\n");
	}

	return 0;
}
