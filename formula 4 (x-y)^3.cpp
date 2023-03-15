#include<stdio.h>
main()
{
	int a,b,c;//x=a,y=b
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	c=(a*3)-(b*3)-(3*2*b)+(3*a*b*2);
	printf("The sum of a & b = %d",c);
}
