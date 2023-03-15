#include<stdio.h>
main()
{
	int a,b,c,d;//x=a,y=b,z=c
	printf("Enter a value for a & b= ");
	scanf("%d%d",&a,&b);
	printf("Enter a value for c = ");
	scanf("%d",&c);
    d=(a*3-b*3)-(c*3-3*a*2*b+3*a*b*2)-(3*b*2*c-3*b*c*2)+(3*a*b*2-3*a*2*c+6*a*b*c);
	printf("The sum of a , b & c = %d",d);
}

