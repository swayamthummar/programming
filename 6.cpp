#include<stdio.h>
main()
{
	int a,b,c,d;//x=a,y=b,z=c
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	printf("Enter a value for c = ");
	scanf("%d",&c);
    d=(a*a*a-b*b*b)-(c*c*c-3*a*a*b+3*a*b*b)-(3*b*b*c-3*b*c*c)+(3*a*b*b-3*a*a*c+6*a*b*c);
	printf("The sum of a , b & c = %d",d);
}

