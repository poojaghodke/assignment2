//program to display number of days in the given month and year

#include<stdio.h>
int main()
{
	int yr,ch;
	printf("enter a year : ");
	scanf("%d",&yr);
	printf("display number of days in given month by using 1.if_else ladder 2.logic operators\n choice : ");
	scanf("%d",&ch);
	enum MONTH{jan=1,feb,march,april,may,june,july,aug,sept,oct,nov,dec}month;

	printf("enter a month 1.for jan to 12.for dec : ");
	scanf("%d",&month);


	switch(ch)
	{
		case 1:
		{		
			if(month==jan)
				printf("jan= 31days\n");
	
			else if(month==feb)
    		{
				if(yr%400==0&&yr%100!=0||yr%4==0)
					printf("feb= 29days\n");
				else
					printf("feb= 28days\n");
			}
	
			else if(month==march)
				printf("march= 31days\n");
	
			else if(month==april)
				printf("april= 30days\n");
	
			else if(month==may)
				printf("may= 31days\n");
	
			else if(month==june)
				printf("june= 30days\n");
	
			else if(month==july)
				printf("july= 31days\n");
	
			else if(month==aug)
				printf("aug= 31days\n");
	
			else if(month==sept)
    			printf("sept= 30days\n");
	
			else if(month==oct)
				printf("oct= 31days\n");
	
			else if(month==nov)
				printf("nov= 30days\n");
	
			else if(month==dec)
				printf("dec= 31days\n");
    		else
				printf("invalid\n");
			break;
		}
		case 2:
		{

			if(month==1 ||month==3 ||month==5 ||month==7 ||month==8 ||month==10 || month==12)
				printf("31days\n");
			else if(month==4 ||month==6 ||month==9 || month==11)
				printf("30days\n");
			else if(month==2)
    		{
				if(yr%400==0&&yr%100!=0||yr%4==0)
					printf("feb= 29days\n");
				else
					printf("feb= 28days\n");
			}
			else
	   			printf("invalid\n");
	   
			break;   
		}	
	}
return 0;
}

