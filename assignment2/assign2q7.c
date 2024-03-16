//program to display number of days in the given year

#include<stdio.h>
int main()
{
	int yr,ch;
	printf("program to find leap year\n 1.without using logical operators\n 2.using logical operators\n 3.conditional operator\n choice : ");
	scanf("%d",&ch);
	printf("enter a year : ");
	scanf("%d",&yr);
	switch(ch)
	{
	case 1:
	{
		if(yr%400==0)
		{
			 printf("leap year\n");
		}
		else if(yr%100==0)
		{
			printf("not leap year\n");
		}
		else if(yr%4==0)
		{
			printf("leap year\n");
		}
		else
		{
			printf("not leap year\n");
		}
		break;
	}

	case 2:
	{
		if((yr%400==0)&&(yr%100!=0)||(yr%4==0))
		{
			printf("leap year\n");
		}
		else
		{
			printf("not leap year\n");
		}
		break;
	}

	case 3:
	{
		((yr%400==0)&&(yr%100==0)||(yr%4==0))?printf("leap year\n"):printf("not leap year\n");
	    break;
	}
	}
	return 0;
}


