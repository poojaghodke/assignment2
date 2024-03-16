//program to crate four function calculator

#include<stdio.h>
int main()
{
int num1,num2;
char opr;
printf("enter first operand =");
scanf("%d",&num1);
printf("enter operand=");
scanf("%*c%c",&opr);
printf("enter second operand =");
scanf("%d",&num2);

switch(opr)
{
case '+' :
         printf("Result=%d\n",num1+num2);
		 break;
		 
case '-' :
         printf("Result=%d\n",num1-num2);
		 break;
case '*' :
         printf("Result=%d\n",num1*num2);
		 break;
case '/' :
		{
         if(num2==0)
		 printf("divide by zero error\n");
		 else
         printf("Result=%d\n",num1/num2);
		 break;
		} 
default :
        printf("invalid operator\n");
}
return 0;
}
