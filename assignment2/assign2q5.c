//program to find maximum of three numbers

#include<stdio.h>
int main()
{
	int n1,n2,n3,ch;
	printf("find max of three numbers using 1.if_else 2.conditional operator");
	scanf("%d",&ch);
	printf("enter three numbers");
	scanf("%d %d %d",&n1,&n2,&n3);
	switch(ch)
	{
		case 1:
		{
			if(n1>n2)
			{
				 if(n1>n3)
  					printf("n1 is greater\n");
 				else
					printf( "n3 is greater\n");
			} 
			else
			{
 				if(n2>n3)
					 printf("n2 is greater\n");
				 else
					 printf("n3 is greter\n");
 	
			}
			break;
		}

	    case 2:
		{	
			if(n1>n2 && n1>n3)
				 printf("n1 is greater\n");
			else if(n2>n1 && n2>n3)
				 printf("n2 is greter\n");
		        else
				 printf("n3 is greter\n");
		}
		break;
	}
return 0;
}
