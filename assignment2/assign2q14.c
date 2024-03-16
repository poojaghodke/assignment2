//program to accept Employee Id , Department No, Designation from user and display output

#include<stdio.h>
int main()
{
int ch;
int emp_id[4];
int dept_no[4];
char dsgn_code[4];
char dept_name[4][10];
char designation[4][10];
for(int i=0;i<4;i++)
{
	printf("enter employee id :");
	scanf("%d",&emp_id[i]);

	printf("enter department number :");
	scanf("%d",&dept_no[i]);

	printf("enter designation code :");
	scanf("%*c%c",&dsgn_code[i]);
  
	printf("enter department name :");
	scanf(" %s",dept_name[i]);
 
	printf("enter designation :");
	scanf(" %s",designation[i]);
}

printf("enter employee id");
scanf("%d",&ch);

switch(ch)
{
case 101:
        printf("Employee with employee id-101 is working in Marketing department as Manager\n");
		
		printf("Employee Id=%d\n",emp_id[0]);
		printf("Department Id=%d\n",dept_no[0]);
		printf("designation code=%c\n",dsgn_code[0]);
		printf("department name=%s\n",dept_name[0]);
		printf("designation=%s\n",designation[0]);

		break;

case 102:
        printf("Employee with employee id-102 is working in Management as Supervisor\n");
		
		printf("Employee Id=%d\n",emp_id[1]);
		printf("Department Id=%d\n",dept_no[1]);
		printf("designation code=%c\n",dsgn_code[1]);
		printf("department name=%s\n",dept_name[1]);
		printf("designation=%s\n",designation[1]);
		break;

case 103:
        printf("Employee with employee id-103 is working in Sales as Security Officer \n");
		
		printf("Employee Id=%d\n",emp_id[2]);
		printf("Department Id=%d\n",dept_no[2]);
		printf("designation code=%c\n",dsgn_code[2]);
		printf("department name=%s\n",dept_name[2]);
		printf("designation=%s\n",designation[2]);
		break;

case 104:
        printf("Employee with employee id-104 is working in Designing as Clerk\n");
		
		printf("Employee Id=%d\n",emp_id[3]);
		printf("Department Id=%d\n",dept_no[3]);
		printf("designation code=%c\n",dsgn_code[3]);
		printf("department name=%s\n",dept_name[3]);
		printf("designation=%s\n",designation[3]);
		break;

default:
       printf("not in record\n");
}

return 0;
}

