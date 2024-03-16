//program that will calculate the price for a quantity

#include<stdio.h>
int main()
{
	int quan;
	printf("enter quantity = ");
	scanf("%d",&quan);

	if(quan<=30)
	{
		printf("Price of quantity =%d\n",5*quan);
	}
	else if(quan>30&&quan<=50)
	{
		printf("Price of quantity =%d\n",(5*quan)-(10*5*quan)/100);
	}
	else
	{
		printf("Price of quantity =%d\n",(5*quan)-(15*5*quan)/100);
	}

	return 0;
}
