//program to accept two numbers and display division of the two numbers

#include<stdio.h>
int main()
{
	float n1,n2;
	printf("enter two numbers");
	scanf("%f %f",&n1,&n2);
	if(n2!=0)
	{
		printf("divison result=%.2f\n",n1/n2);
	}
	else
	{
		printf("invalid!!!\n");
		printf("enter valid denominator\n");
	}
	return 0;
}
