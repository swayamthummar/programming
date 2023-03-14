#include<stdio.h>
main()
{
	int a,b;
	printf("Enter the value for a = ");
	scanf("%d",&a);
	printf("Enter the value for b = ");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a = %d\t",a);
	printf("b = %d",b);
	
}
