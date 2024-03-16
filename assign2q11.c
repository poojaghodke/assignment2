//a program to accept a point in Cartesian co-ordinate system and decide the quadrant in which the point lies
#include<stdio.h>
int main()
{
	int x,y;
	printf("enter x,y co-ordinates : ");
	scanf("%d %d",&x,&y);

	if(x>0 && y>0)
		printf("point lies in quadrant-I (+,+)\n");

	else if(x>0 && y<0)
		printf("point lies in quandrant-II (+,-)\n");

	else if(x<0 && y>0)
		printf("point lies in quandrant-III (-,+)\n");

	else if(x<0 && y<0)
		printf("point lies in quandrant-IV (-,-)\n");

	else
   		printf("point lies on origin\n");

}
