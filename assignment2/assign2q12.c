//program to display number of days in the given month and year using switch case statement

#include<stdio.h>
int main()
{
int ch,yr;
printf("enter year=");
scanf("%d",&yr);
printf("enter a month jan  to dec (1 to 12)=");
scanf("%d",&ch);

switch(ch)
{
case 1:
	{
	printf("Jan= 31days\n");
    break;
	}
case 2:
	{
	if((yr%400==0)&&(yr%100!=0)||(yr%4==0))
	printf("feb= 29days\n");
    else
	printf("feb= 28days\n");
	break;
	}
case 3:	
	{
	printf("march= 31days\n");
    break;
	}
case 4:
	{
	printf("April= 30days\n");
    break;
	}

case 5:
	{
	printf("May= 31days\n");
    break;
	}
case 6:
	{
	printf("June= 30days\n");
    break;
	}
case 7:
	{
	printf("July= 31days\n");
    break;
	}
case 8:
	{
	printf("Aug= 31days\n");
    break;
	}
case 9:
	{
	printf("Sept= 30days\n");
    break;
	}
case 10:
	{
	printf("Oct= 31days\n");
    break;
	}
case 11:
	{
	printf("Nov= 30days\n");
    break;
	}
case 12:
	{
	printf("Dec= 31days\n");
    break;
	}
}
return 0;
}
