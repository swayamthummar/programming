#include<stdio.h>
main()
{
	int a,b,c;//x=a,y=b
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	c=(a*2)+2*a*b+(b*2);
	printf("The sum of a & b = %d",c);
}
