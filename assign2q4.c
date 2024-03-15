//program to find maximum of two numbers

#include<stdio.h>
int main()
{
	int n1,n2,ch;
	printf("find max number by using 1.if_else 2.conditional operator");
	scanf("%d",&ch);
	printf("enter two numbers");
	scanf("%d %d",&n1,&n2);
	switch(ch)
	{
	case 1:
		{
		if(n1>n2)
		printf("n1 is greater than n2\n");
		else
		printf("n2 is greater than n1\n");
		break;
		}

	case 2:
		{
		(n1>n2)?printf("n1 is greater than n2\n"):printf("n2 is greter than n1\n");
		}

	}
	return 0;
}
