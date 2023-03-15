#include<stdio.h>
main()
{
	int a,b,c;
	printf("Enter a value for A ->");
	scanf("%d",&a);
	printf("Enter a value for B ->");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("A -> %d\n",a);
	printf("B -> %d",b);
}
