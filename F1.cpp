#include<stdio.h>
main()
{
	int a,b,c;//x=a,y=b
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	c=a*a+2*a*b+b*b;
	printf("The sum of a & b = %d",c);
}
