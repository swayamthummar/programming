#include<stdio.h>
main()
{
	int a,b,c;//x=a,y=b
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	c=(a*3)+(b*3)-(3*a*2*b)+(b*3);
	printf("The sum of a & b = %d",c);
}
