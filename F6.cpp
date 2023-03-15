#include<stdio.h>
main()
{
	int a,b,c,d;//x=a,y=b,z=c
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	printf("Enter a value for c = ");
	scanf("%d",&c);
    d=(a*a*a)-(b*b*b)-(c*c*c)-(3*a-b)*(b-c*c-a);
	printf("The sum of a , b & c = %d",d);
}
