#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter the value for a = ");
	scanf("%d",&a);
	printf("Enter the value for b = ");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("a = %d\t",a);
	printf("b = %d",b);
	
}
